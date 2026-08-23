#include<Expense.h>
#include<fstream>
#include<iostream>

int WriteFile(){

// std::fstream file("docs.txt",
//  std::ios::app | std::ios::out);

// if(!file){
//     std::cout<<"Could't open this file \n";
//     return 1;
// };

// std::string Name,Age,level;
// file<<"Name:Manu\n";
// file<<"Age:22\n";
// file<<"level:202\n";
  std::ifstream file("data.txt");

    char ch;

    while (file.get(ch)) {

        std::cout << ch;
    }

    // file.close();

    // return 0;

// while (file>>Name>>Age>>level){
//     std::cout<<Name;
//     std::cout<<Age;
//     std::cout<<level;
// }
file.close();

return 0;


}
