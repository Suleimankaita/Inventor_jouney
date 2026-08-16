#include <iostream>
#include <vector>
#include <ctime>
#include "Lessons.h"

struct Cylinder
{
    std::string name;
    double weight;
    double kg;
    double remainingKg;
    int id;
};

void Inventory()
{

    std::vector<Cylinder> arr;
    std::cout << "=============================" << endl;
    std::cout << "|                           |" << endl;
    std::cout << "|                           |" << endl;
    std::cout << "| Welcome to the damale gas | " << endl;
    std::cout << "|                           |" << endl;
    std::cout << "|                           |" << endl;
    std::cout << "=============================" << endl;
    std::cout << "Enter how many cylinders will you like to add" << endl;
    int numbercylinder;
    cin >> numbercylinder;
    srand(time(NULL));

    for (int i = 0; i < numbercylinder; i++)
    {
        Cylinder cy;
        cy.id = rand() + (1 % 1000);
        std::cout << "Name" << std::endl;
        std::cin >> cy.name;
        std::cout << "Weight" << std::endl;
        std::cin >> cy.weight;
        std::cout << "Kg" << std::endl;
        std::cin >> cy.kg;
        arr.push_back(cy);
    };
    std::cout<<"Print"<<std::endl;
    for(const Cylinder&c :arr ){
        std::cout<<c.name<<std::endl;
    }

};