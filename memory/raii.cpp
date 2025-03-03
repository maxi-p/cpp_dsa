#include <iostream>

class MyClass {
private:
    int* data;
    
public:
    MyClass(int value) {
        data = new int(value); // memory alloc
        std::cout << "Resource acquired, value: " << *data << std::endl;
    }

    ~MyClass() {
        delete data; // memory release
        std::cout << "Resource released" << std::endl;
    }
};

int main() {
    MyClass obj(42);
    // No need to manually free memory (will be freed with destructor)
}
