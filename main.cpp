#include <iostream>
#include <fstream>

int main(int argc, char** argv) {
    if (argc != 2) {
        std::cerr << "Usage: ./program <filename>" << std::endl;
        return 1;
    }

    std::ofstream file(argv[1]);
    if (file.is_open()) {
        file << "Hello Distributed Systems World!" << std::endl;
        file.close();
        std::cout << "File written successfully." << std::endl;
    } else {
        std::cerr << "Unable to open file." << std::endl;
        return 1;
    }

    return 0;
}
