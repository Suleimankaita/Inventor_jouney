#include "Inventory.h"
#include <string>
#include <iostream>
#include <fstream>

void SearchProduct(std::string name = "Name:Resistor")
{
    std::ifstream file("../data/Product.txt");

    if (!file)
    {
        std::cout << "Could not open the file\n";
        return;
    }

    std::string nameProduct;
    int amount;
    int quantity;

    while (file >> nameProduct >> amount >> quantity)
    {
        std::cout << "Product: " << nameProduct << '\n';
        if (name == nameProduct)
        {
            std::cout << "Amount: " << amount << '\n';
            std::cout << "Quantity: " << quantity << '\n';

            return;
        }
    }

    std::cout << "Product not found: " << name << '\n';
}