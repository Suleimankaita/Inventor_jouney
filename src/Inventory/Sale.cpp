#include <iostream>
#include <fstream>
#include <string>
#include <cstdio>
#include "Inventory.h"

void SaleProduct(std::string ProductName)
{
    const int quantitySize = 22;

    std::ifstream file("../data/Product.txt");
    std::ofstream tempFile("../data/Product_temp.txt");
    std::ofstream saleFile("../data/Sales.txt", std::ios::app);

    if (!file)
    {
        std::cout << "Couldn't open Product.txt\n";
        return;
    }

    if (!tempFile)
    {
        std::cout << "Couldn't create temporary file\n";
        return;
    }

    if (!saleFile)
    {
        std::cout << "Couldn't open Sales.txt\n";
        return;
    }

    std::string nameProduct;
    int amount;
    int quantity;

    bool found = false;

    while (file >> nameProduct >> amount >> quantity)
    {
        if (nameProduct == ProductName)
        {
            found = true;

            // Check stock
            if (quantity < quantitySize)
            {
                std::cout << "Not enough "
                          << nameProduct
                          << " in stock.\n";

                // Keep the original product
                tempFile << nameProduct << " "
                         << amount << " "
                         << quantity << "\n";

                continue;
            }

            // Decrease product quantity
            quantity -= quantitySize;

            // Save updated product
            tempFile << nameProduct << " "
                     << amount << " "
                     << quantity << "\n";

            // Calculate total sale
            int total = amount * quantitySize;

            // Add sale to Sales.txt
            saleFile << nameProduct << " "
                     << quantitySize << " "
                     << total << "\n";

            std::cout << "Sale successful!\n";
            std::cout << "Product: " << nameProduct << "\n";
            std::cout << "Quantity sold: " << quantitySize << "\n";
            std::cout << "Total: " << total << "\n";
            std::cout << "Remaining stock: " << quantity << "\n";
        }
        else
        {
            // Copy other products unchanged
            tempFile << nameProduct << " "
                     << amount << " "
                     << quantity << "\n";
        }
    }

    file.close();
    tempFile.close();
    saleFile.close();

    if (!found)
    {
        std::cout << "Product not found: "
                  << ProductName << "\n";

        std::remove("../data/Product_temp.txt");
        return;
    }

    // Delete old Product.txt
    std::remove("../data/Product.txt");

    // Rename temporary file to Product.txt
    if (std::rename(
            "../data/Product_temp.txt",
            "../data/Product.txt") != 0)
    {
        std::cout << "Couldn't update Product.txt\n";
        return;
    }
}