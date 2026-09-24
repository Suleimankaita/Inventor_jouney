#include<iostream>
#include "Inventory.h"
#include<fstream>

void AddProduct(){
    std::ofstream file("../data/Product.txt",std::ios::app);
    if(!file)std::cout<< "Could'n open the file Products \n";

    std::cout<<"How many product will you like to add"<<"\n";
    
    int size;
    
    std::cin>>size;
    
    
    for (size_t i = 0; i < 4; i++)
    {
    
    Product product{};
        
    std::cout<<"Write down the name of the product \n"; 
    std::cin>>product.NameProduct;  
    std::cout<<"Write down the amount of the product \n"; 
    std::cin>>product.amount;  
    std::cout<<"Write down the Quantity of the product \n"; 
    std::cin>>product.quantity;  
    
    file<<"Name:"<<product.NameProduct<<"\n";
    file<<"Amount:"<<product.amount<<"\n";
    file<<"Qauntity"<<product.quantity<<"\n";
}
    
}