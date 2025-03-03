#include <iostream>
#include <stdexcept>

void functionA() {
    try {
        throw std::runtime_error("Error in functionA");
    } catch (const std::exception &e) {
        std::cout << "Caught in functionA: " << e.what() << std::endl;
        throw;  // re-throwing
    }
}

int main() {
    try {
        functionA();
    } catch (const std::exception &e) {
        std::cout << "Caught in main: " << e.what() << std::endl;
    }
    return 0;
}
