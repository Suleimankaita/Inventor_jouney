#ifndef LESSON_H
#define LESSON_H
#pragma once
#include<string>
#include<array>
#include<iostream>

void Lesson2();
void RAIIS();

using namespace std;

std::string SearchTxtFiles();
void Lesson2();
std::string WriteFile();
std::string WriteBinaryFile();
std::string ReadFiles();
std::string ReadBinaryData();
std::string Search();

// string Method(string name,string target);

// std::string Method(std::string name, std::string target)
// {
//     (void)target;

//     return name;
// }

class My {
   private:
    int* data;
    int size;

public:

    // Constructor
    My(int size) {
        this->size = size;
        this->data = new int[size]();
    }

    My(const My& other) {
        this->size = other.size;
        this->data = new int[this->size]();

        for (int i = 0; i < this->size; i++) {
            this->data[i] = other.data[i];
        }
    }

    My& operator=(const My& other) {

        if (this == &other) {
            return *this;
        }

        delete[] this->data;

        this->size = other.size;
        this->data = new int[this->size]();

        for (int i = 0; i < this->size; i++) {
            this->data[i] = other.data[i];
        }

        return *this;
    }

    ~My() {
        delete[] this->data;
    }

    int get(int index) {

        if (index < 0 || index >= this->size) {
            cout << "Invalid index!" << endl;
            return -1;
        }

        return this->data[index];
    }

    void set(int index, int value) {

        if (index < 0 || index >= this->size) {
            cout << "Invalid index!" << endl;
            return;
        }

        this->data[index] = value;
    }

    void print() {
        for (int i = 0; i < this->size; i++) {
            cout << this->data[i] << " ";
        }

        cout << endl;
    }

};

#endif
