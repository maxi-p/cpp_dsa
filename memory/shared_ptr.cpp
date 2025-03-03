#include <memory>
#include <iostream>

class MyClass {
public:
    void display() {
        std::cout << "Shared ownership MyClass object" << std::endl;
    }
};

int main() {
    // create a shared_ptr
    std::shared_ptr<MyClass> ptr1 = std::make_shared<MyClass>(); 

    {
        std::shared_ptr<MyClass> ptr2 = ptr1;
        std::cout << "Use count: " << ptr1.use_count() << std::endl; // 2 shared pointers

        ptr2->display();
    } // ptr2 goes out of scope

    std::cout << "Use count: " << ptr1.use_count() << std::endl; // 1 shared ptr
    ptr1->display();
}
