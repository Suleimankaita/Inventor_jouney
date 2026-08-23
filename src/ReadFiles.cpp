#include<iostream>
#include<Lessons.h>
#include<fstream>

void ReadFiles(){

    std::ifstream file("docs.txt");
//     std::fstream file(
//     "data.txt",
//     std::ios::in | std::ios::out
// );
    std::string Name,Age,level;
    // file<<"Many Dan Manu yusuf";
    while (file>>Name>>Age>>level)
    {
        std::cout<<Name<<"\n";
        std::cout<<Age<<"\n";
        std::cout<<level<<"\n";
    }
    file.close();
    

}