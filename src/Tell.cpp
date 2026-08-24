#include<fstream>
#include<iostream>

std::string Tell(){
    
    std::ifstream file("Expensises.txt");
    
    if(!file)return "Couln't Open the file";
    
    file.seekg(0);
    char ch;
    file.get(ch);
    // std::cout<<file.tellg()<<"\n";
    std::cout<<ch<<"\n";
    file.close();

    return "File Sucessfully Opened";

}