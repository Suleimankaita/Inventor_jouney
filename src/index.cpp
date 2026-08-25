#include<iostream>
#include<chrono>
#include <ctime>
#include <iomanip>
#include<Expense.h>
#include<Lessons.h>
#include<fstream>
int main (){
    // auto now=std::chrono::system_clock::now();
    // std::time_t currentTime=std::chrono::system_clock::to_time_t(now);
    // std::tm localtime{};
    // localtime_s(&localtime,&currentTime);
    
    // std::cout << "Date: "<< std::put_time(&localtime, "%Y-%m-%d") << '\n';
    // std::cout << "minute: "<< std::put_time(&localtime, "%H:%M:%S") << '\n';
    // SetExpenses();
// WriteFile();
// ReadFiles();
// SearchTxtFiles();
WriteBinaryFile();
ReadBinaryData();
// Search();

// std::cout<<Search()<<"\n";
//     std::ifstream file("data.txt");

//     if(!file){
//         std::cout<<"Failed to open file \n";
//           return 1;
//     }

//     // file << "Hello World \n";

//     // file << "I m learning c++ file handling";

//     std::string line;

//    while (std::getline(file, line)) {
//         std::cout << line << '\n';
//     }

//     file.close();

    return 0;
}   