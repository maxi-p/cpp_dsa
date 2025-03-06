#include <iostream>
#include <vector>
#include <climits>

void bellmanFord(int n, const std::vector<std::vector<int>>& edge_list, int start) {
    std::vector<int> dist(n, INT_MAX);
    dist[start] = 0;

    for (int i = 1; i < n; ++i) {
        for (const auto& edge : edge_list) {
            int u = edge[0], v = edge[1], weight = edge[2];
            if (dist[u] != INT_MAX && dist[u] + weight < dist[v]) {
                dist[v] = dist[u] + weight;
            }
        }
    }

    for (const auto& edge : edge_list) {
        int u = edge[0], v = edge[1], weight = edge[2];
        if (dist[u] != INT_MAX && dist[u] + weight < dist[v]) {
            std::cout << "Graph contains a negative weight cycle\n";
            return;
        }
    }

    std::cout << "Shortest distances from node " << start << ":\n";
    for (int i = 0; i < n; ++i) {
        if (dist[i] == INT_MAX)
            std::cout << "Node " << i << ": Unreachable\n";
        else
            std::cout << "Node " << i << ": " << dist[i] << "\n";
    }
}

int main() {
    std::vector<std::vector<int>> edge_list = {
        {0, 1, 4}, {0, 2, 2}, {1, 3, 1}, {2, 3, 5},
        {3, 4, 3}, {3, 5, 100}, {5, 6, 5}, {1, 5, -1}
    };
    
    int n = 7;
    int start = 0;

    bellmanFord(n, edge_list, start);

    return 0;
}
