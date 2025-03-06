#include<iostream>
#include<vector>
#include<unordered_map>

void bfs(const std::unordered_map<int, std::vector<int>>& graph, int start) {
    int n = graph.size();
    std::vector<bool> visited(n, false);
    std::vector<int> q;

    q.push_back(start);
    visited[start] = true;

    while (!q.empty()) {
        int node = q.front();
        q.erase(q.begin());

        std::cout << node << " ";

        for (int neighbor : graph.at(node)) {
            if (!visited[neighbor]) {
                q.push_back(neighbor);
                visited[neighbor] = true;
            }
        }
    }
}

int main() {
    std::vector<std::pair<int, int>> edge_list = {{0, 1}, {0, 2}, {1, 3}, {2, 3}, {3, 4}};

    // converting to adj list
    std::unordered_map<int, std::vector<int>> graph;
    for (const auto& edge: edge_list) {
        graph[edge.first].push_back(edge.second);
        graph[edge.second].push_back(edge.first);
    }

    bfs(graph, 0);

    return 0;
}