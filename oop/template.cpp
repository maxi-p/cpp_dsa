#include <iostream>
using namespace std;

template <typename T>
T add(T a, T b) {
    return a + b;
}

int main() {
    cout << add(5, 3) << endl;
    cout << add(3.5, 2.2) << endl;
    cout << add("Hello, ", "World!") << endl;
    return 0;
}