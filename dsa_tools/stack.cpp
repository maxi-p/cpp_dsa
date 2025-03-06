#include<iostream>
#include<vector>

int main() {
    std::vector<int> stack; // init the stack

    stack.push_back(5); // push (to the top of the stack)
    stack.push_back(6);
    stack.push_back(7);
    stack.push_back(8);
    stack.push_back(9);

    int peek = stack.back();

    std::cout << "Peeking at the stack, the last element: " << peek << std::endl;

    while (!stack.empty()) {
        std::cout << stack.back() << std::endl;
        stack.pop_back(); // pop (from the top of the stack)
    }
    
    return 0;
}