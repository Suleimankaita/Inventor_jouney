#include <iostream>
#include <fstream>
#include <string>
#include "Lessons.h"

struct User {
    char Name[100];
    int id;
    int Age;
    int Level;
};


std::string ReadFiles() {

    std::ifstream file("docs.txt");

    if (!file) {
        return "Couldn't open docs.txt";
    }

    int id;
    std::string name;
    int age;
    int level;

    while (file >> id >> name >> age >> level) {

        std::cout << "ID: " << id << "\n";
        std::cout << "Name: " << name << "\n";
        std::cout << "Age: " << age << "\n";
        std::cout << "Level: " << level << "\n";

        std::cout << "-------------------\n";
    }

    file.close();

    return "Text file successfully opened and read";
}



std::string ReadBinaryData() {

    std::ifstream file(
        "user.dat",
        std::ios::binary
    );

    if (!file) {
        return "Couldn't open the binary file";
    }

    User user{};

    while (
        file.read(
            reinterpret_cast<char*>(&user),
            sizeof(User)
        )
    ) {

        std::cout << "ID: " << user.id << "\n";
        std::cout << "Name: " << user.Name << "\n";
        std::cout << "Age: " << user.Age << "\n";
        std::cout << "Level: " << user.Level << "\n";

        std::cout << "-------------------\n";
    }

    file.close();

    return "Binary file successfully opened and read";
}