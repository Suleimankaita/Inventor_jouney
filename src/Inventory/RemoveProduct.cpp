#include "Inventory.h"
#include<iostream>
#include<fstream>

void RemoveProduct(){

    std::string Name="file";
    std::ofstream file("../data/Product.txt");

    std::ifstream ReadFile("../data/Product.txt");
    
    std::ofstream temp("../data/Product.txt");

    if(!file&&!ReadFile&&temp){
        std::cout<<"Could't open the file"<<"\n";
        return;
    }

    Product product{};


     std::string NameProduct;
    int amount,quantity,price;

    bool exist=false;

    while (ReadFile>>NameProduct>>amount>>quantity)
    {
        if (NameProduct==Name)
        {   exist=true;
            std::cout<<"Name:"<<NameProduct<<"\n";
            break;
        }
        
    }

    if(exist){
        std::cout<<"Product found "<<NameProduct<<"\n";
    }

    
    


}