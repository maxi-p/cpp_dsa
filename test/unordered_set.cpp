#include<iostream>
#include<unordered_set>
#include<vector>

int main() {
    // initializing the set
    std::unordered_set<int> hash_set;

    // inserting into a set
    std::cout << "Inserting 10" << std::endl;
    hash_set.insert(10);
    
    // checking if an item is in the set
    if (hash_set.find(10) != hash_set.end()) {
        std::cout << "This item is in set" << std::endl;
    } else {
        std::cout << "This item is NOT in the set" << std::endl;
    }

    // removing an item from the set
    std::cout << "Erasing 10" << std::endl;
    hash_set.erase(10);

    // checking if a set contains an item
    if (hash_set.find(10) != hash_set.end()) {
        std::cout << "This item is in set" << std::endl;
    } else {
        std::cout << "This item is NOT in the set" << std::endl;
    }

    // Inserting into a set
    hash_set.insert(10);
    hash_set.insert(20);
    hash_set.insert(30);
    hash_set.insert(50);

    std::cout << "Convertin the set to a vector" << std::endl;

    // converting the set to a vector
    std::vector<int> list(hash_set.begin(), hash_set.end());
    
    // iterating over a vector
    for(int item : list) {
        std::cout << item << std::endl;
    }
    std::cout << std::endl;

    return 0;
}