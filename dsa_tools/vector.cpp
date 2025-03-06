#include<iostream>
#include<vector>
#include<algorithm>

int main() {
    // declaring a vector
    std::vector<int> vec;
    std::vector<int> vec2(10, -1); // 10 elements, initialized to values -1
    std::vector<int> vec3 = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    std::cout << "vec2: " << std::endl;
    for (int num : vec2) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    std::cout << "vec3: " << std::endl;
    for (int num : vec3) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    // inserting elements
    vec.push_back(0);
    vec.push_back(1);
    vec.insert(vec.begin() + 2, 200);
    vec.push_back(2);
    vec.push_back(3);

    // accessing the elements
    std::cout << "element at index 0: " << vec[0] << std::endl;
    std::cout << "element at index 1: " << vec.at(1) << std::endl;

    // modifying elements
    vec[1] = 100;

    // iterating over a vector (range based)
    for (int num : vec) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    // removing elements
    std::cout << "removing from the back" << std::endl;
    vec.pop_back(); // from back
    std::cout << "removing from the index 1" << std::endl;
    vec.erase(vec.begin() + 1); // from beginning

    // iterating over a vector (iterator based)
    for (auto it = vec.begin(); it != vec.end(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;

    // vector size
    std::cout << "Size of the vecotr: " << vec.size() << std::endl;
    std::cout << "Capacity of the vecotr: " << vec.capacity() << std::endl;

    std::cout << "Resizing the vector to 8" << std::endl;

    // resizing
    vec.resize(8, 0); // resize to 8 elements, new elements initialized to default "0"
    std::cout << "Size of the vecotr: " << vec.size() << std::endl;
    std::cout << "Capacity of the vecotr: " << vec.capacity() << std::endl;

    // checking if vector is empty
    if (vec.empty()) {
        std::cout << "The vector is empty" << std::endl;
    } else {
        std::cout << "The vector is NOT empty" << std::endl;
    }

    std::cout << "Sorting the vecotr" << std::endl;

    // sorting the vector
    std::sort(vec.begin(), vec.end());
    for(int item : vec) {
        std::cout << item << " ";
    }
    std::cout << std::endl;

    std::cout << "Sortin in in custom order using lambdas" << std::endl;

    // sorting the vector in custom order using lambdas
    std::sort(vec.begin(), vec.end(), [](int a, int b) { return a > b; });
    for(int item : vec) {
        std::cout << item << " ";
    }
    std::cout << std::endl;

    std::cout << "Clearing the vecotr" << std::endl;

    // clearing the vector
    vec.clear();
    if (vec.empty()) {
        std::cout << "The vector is empty" << std::endl;
    } else {
        std::cout << "The vector is NOT empty" << std::endl;
    }

    return 0;
}