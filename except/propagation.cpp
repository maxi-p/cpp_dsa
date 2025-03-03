#include <iostream>
#include <stdexcept>

void functionA() {
    throw std::out_of_range("Out of range exception in function A!");
}

void functionB() {
    functionA();
}

int main() {
    try {
        functionB();
    } catch (const std::out_of_range &e) {
        std::cout << "Caught in main: " << e.what() << std::endl;
    }
    return 0;
}
