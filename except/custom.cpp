#include <iostream>
#include <stdexcept>

class MyCustomException : public std::exception {
public:
    const char* what() const noexcept override {
        return "My custom exception occurred!";
    }
};

void throwCustomException() {
    throw MyCustomException();
}

int main() {
    try {
        throwCustomException();
    } catch (const MyCustomException &e) {
        std::cout << "Caught: " << e.what() << std::endl;
    }
    return 0;
}
