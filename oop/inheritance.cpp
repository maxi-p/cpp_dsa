#include<iostream>

class BaseClass {
    public:
        void baseMethod() {
            std::cout << "Base class method" << std::endl;
        }
};
    
class DerivedClass : public BaseClass {
public:
    void derivedMethod() {
        std::cout << "Derived class method" << std::endl;
    }
};

class Animal {
    public:
        void sound() {
            std::cout << "Animal sound" << std::endl;
        }
};
    
class Dog : public Animal {
public:
    void sound() {
        std::cout << "Bark" << std::endl;
    }
};
    
int main() {
    DerivedClass obj;
    obj.baseMethod(); 
    obj.derivedMethod();

    Dog dog;
    dog.sound(); 
    return 0;
    return 0;
}