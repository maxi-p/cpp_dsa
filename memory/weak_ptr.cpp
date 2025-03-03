#include <memory>
#include <iostream>

class MyClass {
public:
    void display() {
        std::cout << "Weak pointer observation" << std::endl;
    }
};

int main() {
    std::shared_ptr<MyClass> ptr1 = std::make_shared<MyClass>();
    std::weak_ptr<MyClass> weakPtr = ptr1; // ref count unaffected

    std::cout << "Use count before expiration: " << ptr1.use_count() << std::endl;

    if (auto sharedPtr = weakPtr.lock()) { // convert weak_ptr to shared_ptr to access object
        sharedPtr->display();
        std::cout << "Use count: " << ptr1.use_count() << std::endl;
    }

    ptr1.reset(); // reset the shared_ptr (object deleted)

    if (auto sharedPtr = weakPtr.lock()) {
        sharedPtr->display();
    } else {
        std::cout << "Object became unavailable to lock" << std::endl;
    }
}
