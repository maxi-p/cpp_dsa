#include<iostream>
#include<vector>

int best_floor(int n, int m, std::vector<int>& targets) {
    std::sort(targets.begin(), targets.end()); // O(mlogm)

    int res = 1;

    if (m % 2 == 1) {
        res = targets[m / 2]; // median floor
    } else {
        res = (targets[m / 2 - 1] + targets[m / 2]) / 2;
    }
    
    int val = 0;
    for (int i = 0; i < m; i++) {
        val += abs(targets[i] - res);
    }
    
    // printing optimal value for debugging
    // std::cout << "Optimal floor (total travel distance): " << val << std::endl;
    
    return res;
}

int main() { 
    int n = 77; // number of floors
    std::vector<int> targets = {3, 5, 2, 6, 77, 77};
    int m = targets.size(); // number of people
    
    int optimal_floor = best_floor(n, m, targets);

    std::cout << "Optimal floor: " << optimal_floor << std::endl;
    return 0;
}