#include<iostream>

class ClassName {
    public: // public everywhere
        int publicMember;

    private: // only accessible from inside the class
        int member1;
        int member2;

    protected: // accessible from within the class and derived classes
        int protectedMember;
    
    public:
        // constructor
        ClassName(int value) {
            member1 = value;
        }

        // destructor
        ~ClassName() {
            // cleanup code
        }

        // setter
        void setMember1(int value) {
            member1 = value;
        }
    
        // getter
        int getMember1() {
            return member1;
        }
    
        void display() {
            std::cout << "Member1: " << member1 << std::endl;
        }
};

int main() {
    ClassName obj(5);
    obj.setMember1(10);
    obj.display();
}