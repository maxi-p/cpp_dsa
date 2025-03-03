#include <memory>
#include <iostream>

// std 14
class MyClass {
public:
    void display() {
        std::cout << "MyClass object" << std::endl;
    }
};

int main() {
    // create a unique pointer
    std::unique_ptr<MyClass> ptr1 = std::make_unique<MyClass>(); 
    ptr1->display();

    // std::unique_ptr<MyClass> ptr2 = ptr1; // This doesn't work
    std::unique_ptr<MyClass> ptr2 = std::move(ptr1); // move ownership from ptr1 to ptr2

    // ptr1 is now null, ptr2 owns the MyClass object
    if (!ptr1) {
        std::cout << "ptr1 is null after move" << std::endl;
    }

    ptr2->display();
}
