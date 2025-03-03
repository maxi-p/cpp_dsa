#include <iostream>
#include <fstream>

class FileHandler {
private:
    std::fstream file;

public:
    FileHandler(const std::string& filename) {
        file.open(filename, std::ios::out);
        if (!file.is_open()) {
            std::cerr << "Failed to open the file!" << std::endl;
            exit(1);
        }
        std::cout << "File opened: " << filename << std::endl;
    }

    ~FileHandler() {
        if (file.is_open()) {
            file.close();
            std::cout << "File closed" << std::endl;
        }
    }

    // write to file
    void write(const std::string& text) {
        file << text;
    }
};

int main() {
    {
        FileHandler file("example.txt");
        file.write("Hello, RAII!\n");
    } // file is closed here, when going out of scope
}
