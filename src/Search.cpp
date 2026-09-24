#include<iostream>
#include "Lessons.h"
#include<fstream>


struct User{
    std::string Name;
    int id,Age,Level;
};

std::string Search(){

    std::ifstream file("user.dat",std::ios::binary);

    if(!file)return "Could't open the file";

    std::string SearchName;
    std::cout<<"Write down the name you want to search"<<"\n";
    std::cin>>SearchName;
    std::cout<<"\n";
    User user;
    while (file.read(reinterpret_cast<char*>(&user),sizeof(user)))
    {
        if(user.Name==SearchName){
        std::cout<<"ID:"<<user.id<<"\n";
        std::cout<<"Name:"<<user.Name<<"\n";
        std::cout<<"Age:"<<user.Age<<"\n";
        std::cout<<"Level:"<<user.Level<<"\n";
        }
    }
    
    return "User not found";

}


std::string SearchTxtFiles(){
    
    std::ifstream file("docs.txt");
    
    if(!file)std::cout<<"Data.txt could'n open "<<std::endl;

    std::string Name,Age,level,Id;
    std::string SearchName;
    std::cout<<"Write down the name you want to search"<<"\n";
    std::cin>>SearchName;
    std::cout<<"\n";
    while (file>>Id>>Name>>Age>>level)
    {
        if(Name==SearchName){

            std::cout<<Id<<"\n";
            std::cout<<Name<<"\n";
            std::cout<<Age<<"\n";
            std::cout<<level<<"\n";
        }
    }
    
    return "User Not found";
};

