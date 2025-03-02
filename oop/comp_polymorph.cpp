#include<iostream>

class Print {
    public:
        void show(int i) {
            std::cout << "Integer: " << i << std::endl;
        }
    
        void show(std::string s) {
            std::cout << "String: " << s << std::endl;
        }
};

int main() {
    Print obj;
    obj.show(10);
    obj.show("Hello");
    return 0;
}