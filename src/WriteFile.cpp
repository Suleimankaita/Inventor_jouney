#include<Expense.h>
#include<fstream>
#include<iostream>

struct User {
int id;
int age;
};


int WriteFile(){




    // User user[]={
    //     1, 24,
    //     2, 1,
    //     3, 4
    // };

    // std::ofstream file(
    //     "users.dat",
    //     std::ios::binary
    // );

    // file.write(
    //     reinterpret_cast<char*>(&user),
    //     sizeof(user)
    // );

    // file.close();

    // return 0;


std::ofstream file("user.dat",std::ios::binary);

User user[]={
    1,20,
    2,30,
    3,310,
};

file.write(reinterpret_cast<char*>(&user),sizeof(user));

file.close();


return 0;
















// // std::fstream file("docs.txt",
// //  std::ios::app | std::ios::out);

// // if(!file){
// //     std::cout<<"Could't open this file \n";
// //     return 1;
// // };

// // std::string Name,Age,level;
// // file<<"Name:Manu\n";
// // file<<"Age:22\n";
// // file<<"level:202\n";
//   std::ifstream file("data.txt");

//     char ch;

//     while (file.get(ch)) {

//         std::cout << ch;
//     }

    // file.close();

    // return 0;

// while (file>>Name>>Age>>level){
//     std::cout<<Name;
//     std::cout<<Age;
//     std::cout<<level;
// }


}
