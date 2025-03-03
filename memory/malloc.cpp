#include <iostream>
#include <cstdlib>

int main() {
    int* ptr = (int*)malloc(sizeof(int));

    if (ptr == nullptr) { // nullptr instread of NULL
        return 1;
    }

    *ptr = 42;

    std::cout << "Val: " << *ptr << std::endl;

    free(ptr);
    return 0;
}
