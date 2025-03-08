#include <iostream>
#include <vector>
#include <climits>

int main() {
    std::vector<std::vector<int>> edge_list = {
        {0, 1, 4}, {0, 2, 2}, {1, 3, 1}, {2, 3, 5},
        {3, 4, 3}, {3, 5, 100}, {5, 6, 5}, {1, 5, -1}
    };

    int n = 7;
    
    std::vector<std::vector<int>> dist(n, std::vector<int>(n, INT_MAX));

    // Diagonal to 0 (can't go from node to itself)
    for (int i = 0; i < n; i++) {
        dist[i][i] = 0;
    }

    for (const auto& edge : edge_list) {
        int u = edge[0];
        int v = edge[1];
        int weight = edge[2];
        dist[u][v] = weight;
    }

    for (int k = 0; k < n; k++) {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (dist[i][k] != INT_MAX && dist[k][j] != INT_MAX) {
                    dist[i][j] = std::min(dist[i][j], dist[i][k] + dist[k][j]);
                }
            }
        }
    }

    std::cout << "Shortest distances between every pair of vertices:" << std::endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (dist[i][j] == INT_MAX) {
                std::cout << "INF ";
            } else {
                std::cout << dist[i][j] << " ";
            }
        }
        std::cout << std::endl;
    }

    return 0;
}
