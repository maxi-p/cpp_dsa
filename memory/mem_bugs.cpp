#include <iostream>

void memoryLeak() {
    int* ptr = new int(42);
}

int main() {
    memoryLeak(); // memory leak

    int* ptr2 = new int(23);
    delete ptr2;

    std::cout << *ptr2 << std::endl; // dangling pointer (undefined behavior)

    return 0;
}