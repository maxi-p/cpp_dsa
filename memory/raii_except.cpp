#include <iostream>

class Resource {
public:
    Resource() {
        std::cout << "Resource acquired" << std::endl;
    }

    ~Resource() {
        // Desctructor is still called on exception
        std::cout << "Resource released" << std::endl;
    }
};

void function_that_throws() {
    Resource res;
    std::cout << "Function that throws exception" << std::endl;
    throw std::runtime_error("Something went wrong");
}

int main() {
    try {
        function_that_throws();
    } catch (const std::exception& e) {
        std::cout << "Caught exception: " << e.what() << std::endl;
    }
}
