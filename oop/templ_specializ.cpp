#include<iostream>
#include<string>

template <typename T>
void print(T value) {
    std::cout << value << std::endl;
}

// specializing what to do on char input
template <>
void print<const char*>(const char* value) {
    std::cout << "String: " << value << std::endl;
}

int main() {
    print(42);
    print("Hello");
    return 0;
}