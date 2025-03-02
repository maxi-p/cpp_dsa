#include<iostream>
#include<string>

template <typename T>
class Box {
private:
    T value;

public:
    Box(T val) : value(val) {}

    T getValue() {
        return value;
    }
};

int main() {
    Box<int> intBox(5);
    Box<double> doubleBox(3.14);
    Box<std::string> stringBox("Template Class");

    std::cout << intBox.getValue() << std::endl;
    std::cout << doubleBox.getValue() << std::endl;
    std::cout << stringBox.getValue() << std::endl;
    return 0;
}
