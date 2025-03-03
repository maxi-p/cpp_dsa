#include <iostream>
#include <stdexcept>

void testExceptions(int num) {
    if (num == 0) {
        throw std::runtime_error("Runtime error occurred!");
    } else if (num < 0) {
        throw std::invalid_argument("Negative number error!");
    } else {
        std::cout << "Valid input: " << num << std::endl;
    }
}

int main() {
    try {
        testExceptions(-10);
    }
    catch (const std::invalid_argument &e) {
        std::cout << "Caught Invalid Argument: " << e.what() << std::endl;
    }
    catch (const std::runtime_error &e) {
        std::cout << "Caught Runtime Error: " << e.what() << std::endl;
    }
    catch (...) {  // catching any other general exceptions
        std::cout << "An unknown error occurred." << std::endl;
    }
    return 0;
}
