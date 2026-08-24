#ifndef EXPENSES_H
#define EXPENSES_H
#pragma once
#include<string>
#include<vector>
#include<iostream>



struct Expenses{
    double Amount;
    int Date;
    std::string Name;
    
};


std::string Tell();

void SetExpenses();

void printExpenses();

#endif
