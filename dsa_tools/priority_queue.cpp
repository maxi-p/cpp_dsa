#include<iostream>
#include<queue>
#include<vector>

struct Compare {
    bool operator() (std::string a, std::string b) {
        return a.length() < b.length();
    }
};

int main() {
    std::priority_queue<int> pq;

    // adding to a priority queue (max queue)
    pq.push(10);
    pq.push(30);
    pq.push(20);
    pq.push(5);

    // peek a queue
    std::cout << "Peeking into a queue: " << pq.top() << std::endl;

    // popping from a queue
    std::cout << "Popping from a queue" << std::endl;
    pq.pop();
    std::cout << "Peeking into a queue: " << pq.top() << std::endl;

    // checking if a pq is empty
    std::cout << "Is queue empty?: " << pq.empty() << std::endl;

    std::cout << "Popping from heap 1 by 1:" << std::endl;
    while (!pq.empty()) {
        std::cout << pq.top() << std::endl;
        pq.pop();
    }
    
    std::cout << "Is queue empty?: " << pq.empty() << std::endl;

    // making a custom comparator
    auto cmp = [](int a, int b) { return a > b; };
    std::priority_queue<int, std::vector<int>, decltype(cmp)> minHeap(cmp);
    
    minHeap.push(10);
    minHeap.push(30);
    minHeap.push(20);
    minHeap.push(5);

    std::cout << "Popping from minheap 1 by 1:" << std::endl;

    while (!minHeap.empty()) {
        std::cout << minHeap.top() << std::endl;
        minHeap.pop();
    }

    std::priority_queue<std::string, std::vector<std::string>, Compare> strPq; 

    strPq.push("asd");
    strPq.push("asdasdasd");
    strPq.push("saff");
    strPq.push("sdfsdfsdfffddfs");
    strPq.push("1");

    while (!strPq.empty()) {
        std::cout << strPq.top() << std::endl;
        strPq.pop();
    }

    return 0;
}