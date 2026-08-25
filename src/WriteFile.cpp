#include <iostream>
#include <fstream>
#include <string>
#include <ctime>
#include <cstdlib>
#include <cctype>
#include "Lessons.h"

struct User {
    char Name[100];
    int id;
    int Age;
    int Level;
};

std::string tolow(std::string name) {
    for (char& c : name) {
        c = static_cast<char>(
            std::tolower(static_cast<unsigned char>(c))
        );
    }

    return name;
}


std::string WriteFile() {

    std::ofstream file("docs.txt", std::ios::app);

    if (!file) {
        return "Couldn't open the file";
    }

    int size;

    std::cout << "Write down the size of the users: ";
    std::cin >> size;

    for (int i = 0; i < size; i++) {

        User user;

        int id = std::rand() % 1000 + 1;

        std::cout << "\nWrite down the name of the user: ";
        std::cin >> user.Name;

        std::cout << "Write down the age of the user: ";
        std::cin >> user.Age;

        std::cout << "Write down the level of the user: ";
        std::cin >> user.Level;

        user.id = id;

        file << user.id << "\n";
        file << tolow(user.Name) << "\n";
        file << user.Age << "\n";
        file << user.Level << "\n";
    }

    file.close();

    return "Writing to text file was successful";
}



std::string WriteBinaryFile() {

    std::ofstream file(
        "user.dat",
        std::ios::binary | std::ios::app
    );

    if (!file) {
        return "Couldn't open the binary file";
    }

    int size;

    std::cout << "Write down the size of the users: ";
    std::cin >> size;

    for (int i = 0; i < size; i++) {

        User user{};

        user.id = std::rand() % 1000 + 1;

        std::cout << "\nWrite down the name of the user: ";
        std::cin >> user.Name;

        std::cout << "Write down the age of the user: ";
        std::cin >> user.Age;

        std::cout << "Write down the level of the user: ";
        std::cin >> user.Level;

        file.write(
            reinterpret_cast<const char*>(&user),
            sizeof(User)
        );
    }

    file.close();

    return "Writing to binary file was successful";
}


