#ifndef INVENTORY_H
#define INVENTORY_H
#pragma once
#include<vector>
#include<string>

struct Product{
    std::string NameProduct;
    int amount,quantity,price;
};

void AddProduct();

void RemoveProduct();

void SaleProduct(std::string ProductName);
void SearchProduct(std::string Name);



#endif
