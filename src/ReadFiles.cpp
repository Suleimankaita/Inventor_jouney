#include<iostream>
#include<Lessons.h>
#include<fstream>

// struct User{
//     int id,Age,level;
//     std::string Name;

// };

struct User {
    int id;
    int age;
};



void ReadFiles(){

//     std::ifstream file("user.dat",std::ios::binary);
// //     std::fstream file(
// //     "data.txt",
// //     std::ios::in | std::ios::out
// // );
//     // std::string Name,Age,level;
//     // file<<"Many Dan Manu yusuf";
//     User user;
//     while (file.read(
//         reinterpret_cast<char*>(&user),
//         sizeof(user)))
//     {
//         std::cout<<user.Name<<"\n";
//         std::cout<<user.Age<<"\n";
//         // std::cout<<user.level<<"\n";
//     }
//     file.close();
    
    std::ifstream file("user.dat",std::ios::binary);

    User user;

    while (file.read(reinterpret_cast<char*>(&user),sizeof(user)))
    {
        std::cout<<"ID :"<<user.id<<"\n";
        std::cout<<"Age :"<<user.age<<"\n";
    }
    


    file.close();

}