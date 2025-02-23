#include<iostream>
#include<vector>

int main() {

    std::vector<int> queue;

    queue.push_back(5);
    queue.push_back(4);
    queue.push_back(3);
    queue.push_back(2);
    queue.push_back(1);

    while (!queue.empty()) {
        std::cout << queue.front() << std::endl;
        queue.erase(queue.begin());
    }

    return 0;
}