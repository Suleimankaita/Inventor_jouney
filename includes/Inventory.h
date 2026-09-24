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


void SearchProduct(std::string Name);



#endif
