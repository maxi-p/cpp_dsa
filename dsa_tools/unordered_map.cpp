#include<iostream>
#include<unordered_map>
#include<vector>
#include<utility>

int main() {
    // declaring a map
    std::unordered_map<std::string, int> map;
    std::unordered_map<int, std::string> map2 = {{1, "One"}, {2, "Two"}, {3, "Three"}};
    std::string key = "apple";

    // Inserting elements into a map
    map[key] = 1;
    map["banana"] = 2;
    map["cherry"] = 3;

    // Modifying existing entries
    map[key] = 100;
    
    // Printing an element from a map
    std::cout << "Key 1 - [" << key << "] : " << map[key] << std::endl;

    // Itterating over the map
    for (const auto pair : map) {
        std::cout << pair.first << " - " << pair.second << std::endl;
    }

    // Removing an element from a map
    auto it = map.find(key);
    if (it != map.end()) {
        std::cout << "The entry popped is: " << it->first << " - " << it->second << std::endl;
        map.erase(it);
    } else {
        std::cout << "The value already doesn't exist" << std::endl;
    }

    // Checking if an entry exists
    if (map.find(key) != map.end()) {
        std::cout << "The key \"" << key << "\" exists in a map" << std::endl;
    } else {
        std::cout << "The key \"" << key << "\" does NOT exist in a map" << std::endl;
    }

    // Checking the size of the map
    std::cout << "Size of the map: " << map.size() << std::endl;

    // checking if map is empty
    if (map.empty()) {
        std::cout << "map is empty" << std::endl;
    } else {
        std::cout << "map is NOT empty" << std::endl;
    }

    std::cout << "Clearing out the map" << std::endl;

    // Converting map to a vector of entries
    std::cout << "Converting a map to a vector of entries" << std::endl;

    std::vector<std::pair<std::string, int>> vec_entries;
    for (auto& entry : map) {
        vec_entries.push_back(entry);
    }
    for (auto& item : vec_entries) {
        std::cout << "[" << item.first << "] : " << item.second << std::endl;
    }

    // Clearing out the map
    map.clear();
    std::cout << "Size of the map: " << map.size() << std::endl;

    return 0;
}