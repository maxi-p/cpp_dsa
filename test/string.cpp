#include<iostream>
#include<string>
#include<algorithm>
#include<sstream>
#include<vector>

int main() {
    // initializing strings
    std::string str;
    std::string str2 = "Hello";
    std::string str3(5, 'a');

    std::cout << "str: " << str << std::endl;
    std::cout << "str2: " << str2 << std::endl;
    std::cout << "str3: " << str3 << std::endl;

    // accessing characters of strings
    char ch = str2[2];
    char ch2 = str2.at(1);

    std::cout << "Char at index 2 is: " << ch << std::endl;
    std::cout << "Char at index 1 is: " << ch2 << std::endl;

    // concatenating the strings
    std::cout << "Before: " << str2 << std::endl;
    str2 += " World";
    std::cout << "After: " << str2 << std::endl;

    // Inserting a substring at a given index
    std::cout << "Before: " << str2 << std::endl;
    str2.insert(5, ",");
    std::cout << "After: " << str2 << std::endl;

    // Removing a substring (of a given size) from a string
    std::cout << "Before: " << str2 << std::endl;
    str2.erase(5, 1);
    std::cout << "After: " << str2 << std::endl;

    // Replacing a substring of a given size with a given string
    std::cout << "Before: " << str2 << std::endl;
    str2.replace(0, 5, "Hi");
    std::cout << "After: " << str2 << std::endl;

    // Getting the size and isempty
    std::cout << "Size: " << str2.size() << std::endl;
    std::cout << "Is empty: " << str2.empty() << std::endl;

    // Getting the substring of a string
    std::cout << "Substring (0, 5): " << str2.substr(3, 5) << std::endl; // starting at index 3, of length 5

    // Comparing strings
    std::cout << "Comparing a string (to \"Hi world\"): " << (str2 == "Hi World") << std::endl;
    std::cout << "Comparing a string (to \"Not equal\"): " << (str2 == "Not equal") << std::endl;

    // Iterating characters of a string
    for (char ch : str2) {
        std::cout << ch << std::endl;
    }

    // String to integer
    int num1 = std::stoi("123");

    // string to float
    int num2 = std::stof("3.14");

    // num to string
    std::string str4 = std::to_string(123);
    std::cout << (str4 += " string") << std::endl;

    // Searching a substring
    size_t found = str2.find("World");  // Returns the index of the first occurrence
    if (found != std::string::npos) { // Returns std::string::npos if not found
        std::cout << "'World' found at index " << found << std::endl;
    }

    // string reversal (needs <algorithm>)
    std::reverse(str2.begin(), str2.end());
    std::cout << "After reversal: " << str2 << std::endl;

    // splitting by a given delimiter
    std::cout << "Splitting string by a delimiter (\",\")" << std::endl;
    
    std::string words = "one, two, three, four";
    char delimiter = ',';
    std::stringstream my_stream(words);

    std::vector<std::string> words_vec;
    std::string buffer;

    while(std::getline(my_stream, buffer, delimiter)) {
        words_vec.push_back(buffer);
    }

    for (auto& word : words_vec) {
        std::cout << word << std::endl;
    }

    return 0;
}