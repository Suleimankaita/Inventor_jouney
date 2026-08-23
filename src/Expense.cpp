#include<iostream>
#include<chrono>
#include <ctime>
#include <iomanip>
#include<string>
#include<Expense.h>
#include<fstream>

std::vector<Expenses>arrs;

void SetExpenses(){

    std::ofstream file("Expensises.csv",std::ios::app);


    auto now=std::chrono::system_clock::now();
    std::time_t currentTime=std::chrono::system_clock::to_time_t(now);
    std::tm localtime{};
    localtime_s(&localtime,&currentTime);
    

    std::string  Date;
        Expenses exp;

    for(int i=0;i<2;i++){
        Expenses ex;
            std::string name2;
    int amount2;
        std::cout<<"Add Expenses Name"<<"\n";
        std::cin>>name2;
        file<<"Name:"<<name2<<"\n";
        
        ex.Name=name2;
        std::cout<<"Add Expenses amount"<<"\n";
        std::cin>>amount2;
        ex.Amount=amount2;
        file<<"amount:"<<amount2<<"\n";
        file<<"Date:"<<std::put_time(&localtime,"%Y-%m-%d")<<"\n";
       
        // ex.Date=std::put_time(&localtime, "%Y-%m-%d");
        arrs.push_back(ex);
    }


    for(Expenses &e :arrs){
        std::cout<<"Name:"<<e.Name<<std::endl;
        std::cout<<"amount:"<<e.Amount<<std::endl;
    }
    file.close();
}

