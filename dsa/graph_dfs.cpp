#include<iostream>
#include<vector>
#include<unordered_map>

void dfsUtil(const std::unordered_map<int, std::vector<int>>& graph, int node, std::vector<bool>& visited) {
    visited[node] = true;
    std::cout << node << " ";
    
    for (int neighbor : graph.at(node)) {
        if (!visited[neighbor]) {
            dfsUtil(graph, neighbor, visited);
        }
    }
}

void dfs(const std::unordered_map<int, std::vector<int>>& graph, int start) {
    int n = graph.size();
    std::vector<bool> visited(n, false);
    dfsUtil(graph, start, visited);
    std::cout << std::endl;
}

int main() {
    std::vector<std::pair<int, int>> edge_list = {{0, 1}, {0, 2}, {1, 3}, {2, 3}, {3, 4}, {3, 5}, {5, 6}};

    // converting to adj list
    std::unordered_map<int, std::vector<int>> graph;
    for (const auto& edge: edge_list) {
        graph[edge.first].push_back(edge.second);
        graph[edge.second].push_back(edge.first);
    }

    dfs(graph, 0);

    return 0;
}