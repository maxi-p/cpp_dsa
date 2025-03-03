#include <iostream>

int main() {
    int* ptr = new int(42); // allocating

    std::cout << "Value: " << *ptr << std::endl;

    delete ptr; // freeing
    return 0;
}