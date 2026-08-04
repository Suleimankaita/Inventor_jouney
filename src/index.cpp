#include<iostream>
#include <vector>
#include <queue>
#include "Lessons.h"
using namespace std;

class my{
    private:
    int *arr;
    int size;

    public:

    my(int size){
        this->size=size;
        cout<<"Constructor called "<<size<<endl;
        this->arr = new int[size];
    }

    my(const my& other){
        this->size=other.size;
        cout<<"Constructor called "<<other.size<<endl;
        this->arr = new int[other.size];

        for(int i=0;i<size;i++){
            this->arr[i] = other.arr[i];
        };
    }
    void print(){
        for(int i=0;i<size;i++){
            cout<<this->arr[i]<<" ";
        }
        cout<<endl;
    }
    void set(int index, int value){
            this->arr[index] = value;
        
    }
    void get(int index){
            cout<<this->arr[index]<<endl;
        
    }

    void addressFun(){
        cout<<"Address of obj1: "<<this->arr<<endl;
        // cout<<"Address of obj2: "<<obj.arr<<endl;
        
    }

    ~my(){
        delete[] this->arr;
    }
};

int main()
{   
    Lesson1 lesson(5);

    lesson.set(0, 10);
    lesson.set(1, 20);
    lesson.set(2, 30);
    lesson.set(3, 40);
    lesson.set(4, 50);

    cout<<lesson.get(3)<<endl; 

    array<int, 5>arr= lesson.print();

    for(int S:arr){
        cout<<S<<" ";
    }
    //     my obj1(5);
// obj1.set(0, 10);
// obj1.set(1, 20);
// obj1.set(2, 30);
// obj1.set(3, 40);
// obj1.set(4, 50);

// obj1.addressFun();
// my obj2 = obj1;
// obj2.addressFun();

// obj2.set(0, 999);

// cout << "obj1: ";
// obj1.print();

// cout << "obj2: ";
// obj2.print();

return 0;
}