#ifndef LESSON_H
#define LESSON_H
#pragma once
#include<string>

class Lesson1 {
    private:
    int *data;
    int size;
    
    public:

    Lesson1(int size){
        this->size=size;
        this->data=new int[size];
    }
    Lesson1 & operator=(const Lesson1&other){

        if(this==&other){
            return *this;
        }
            delete[] this->data;

            this->size=other.size;
            
            this->data=new int[other.size];
            
            for(int i=0;i<size;i++){
                this->data[i]=other.data[i];
            }
        
        return *this;
    }
    ~Lesson1(){
        delete[] data; 
    }
    void set(int index, int value){
        if(index>=0 && index<size){
            this->data[index]=value;
        }
    }
    
    int get(int index){
        
        if(index>=0 && index<size){
            return data[index];
        }
        return -1;
    }

     std::array<int, 5> print(){
        std::array<int, 5> arr;
        for(int i=0;i<size;i++){
            arr[i]=this->data[i];
        }
        return arr;
     }

     void printAddress(){
        std::cout<<"Address of data: "<<this->data<<std::endl;
     }

};

#endif
