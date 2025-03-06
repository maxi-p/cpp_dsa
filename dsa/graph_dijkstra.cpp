#include<iostream>
#include<vector>
#include<unordered_map>
#include<queue>

void dijkstra(const std::vector<std::vector<std::pair<int, int>>>& graph, int start) {
    int n = graph.size();
    std::priority_queue<std::pair<int, int>, std::vector<std::pair<int, int>>, std::greater<std::pair<int, int>>> pq;

    std::vector<int> dist(n, INT_MAX);
    dist[start] = 0;

    pq.push({0, start});

    while (!pq.empty()) {
        int u = pq.top().second;
        int d = pq.top().first;
        pq.pop();
        
        if (d > dist[u]) continue;
        
        for (const std::pair<int, int>& neighbor : graph[u]) {
            int v = neighbor.first;    
            int weight = neighbor.second; 

            if (dist[u] + weight < dist[v]) {
                dist[v] = dist[u] + weight;
                pq.push({dist[v], v});
            }
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
    std::vector<std::vector<int>> edge_list = {{0, 1, 4}, {0, 2, 2}, {1, 3, 1}, {2, 3, 5}, {3, 4, 3}, {3, 5, 100}, {5, 6, 5}, {1, 5, 1}};

    int n = 7; // vertecies
    // converting to adj list
    std::vector<std::vector<std::pair<int, int>>> graph(n);
    for (const auto& edge: edge_list) {
        int u = edge[0], v = edge[1], weight = edge[2];
        graph[u].push_back({v, weight});
        graph[v].push_back({u, weight});
    }

    dijkstra(graph, 0);

    return 0;
}