#ifndef LESSON_H
#define LESSON_H
#pragma once
#include<string>
#include<array>
#include<iostream>

void Lesson2();
void Inventory();

using namespace std;

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

    // Copy Constructor
    My(const My& other) {
        this->size = other.size;
        this->data = new int[this->size]();

        for (int i = 0; i < this->size; i++) {
            this->data[i] = other.data[i];
        }
    }

    // Copy Assignment Operator
    My& operator=(const My& other) {

        // Prevent:
        // a = a;
        if (this == &other) {
            return *this;
        }

        // Free old memory
        delete[] this->data;

        // Allocate new memory
        this->size = other.size;
        this->data = new int[this->size]();

        // Copy values
        for (int i = 0; i < this->size; i++) {
            this->data[i] = other.data[i];
        }

        return *this;
    }

    // Destructor
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
