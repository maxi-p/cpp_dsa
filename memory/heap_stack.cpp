#include<iostream>

void stack() {
    int x = 42;  // allocated on the stack
    std::cout << "Value: " << x << std::endl;
}

void heap() {
    int* x = new int(42);  // allocated on the heap
    std::cout << "Value: " << *x << std::endl;
    delete x;
}

int main() {
    stack();
    heap();
    
    return 0;
}