#include <iostream>
using namespace std;

template <typename T1, typename T2>
class Pair {
private:
    T1 first;
    T2 second;

public:
    Pair(T1 a, T2 b) : first(a), second(b) {}

    T1 getFirst() {
        return first;
    }

    T2 getSecond() {
        return second;
    }
};

int main() {
    Pair<int, string> pair(1, "one");
    cout << pair.getFirst() << " - " << pair.getSecond() << endl;
    return 0;
}