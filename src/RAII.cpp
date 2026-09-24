#include "Lessons.h"
#include <iostream>
#include <fstream>

class RAii {
private:
    std::fstream files;

public:
    RAii() : files("docs.txt", std::ios::in | std::ios::out | std::ios::app) {
        if (!files) {
            std::cout << "Failed to open the file\n";
        }
    }

    ~RAii() {
        if (files.is_open()) {
            files.close();
        }
    }
};

void RAIIS() {
    RAii file;
    std::cout << "The file is managed by RAII.\n";
}