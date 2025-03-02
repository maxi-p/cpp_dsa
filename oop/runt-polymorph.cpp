#include<iostream>

class Base {
    public:
        virtual void show() {
            std::cout << "Base class show" << std::endl;
        }
};
    
class Derived : public Base {
public:
    void show() override {
        std::cout << "Derived class show" << std::endl;
    }
};

int main() {
    Base* basePtr;
    Derived derivedObj;

    basePtr = &derivedObj;
    basePtr->show(); 
    return 0;
}
    