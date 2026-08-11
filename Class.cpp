#include<iostream>

using namespace std;

class Cl{
    
    private:
    int *data;
    int size;

    public:

    Cl(int size){
        this->size=size;
        this->data=new int[size];
    }

    Cl& operator=(const Cl&Other){

        if(this==&Other)return *this;

        delete[]this->data;

        this->size=Other.size;

        this->data=new int[Other.size];

        for(int i=0;i<this->size;i++){
            this->data[i]=Other.data[i];
        }

    }

    ~Cl(){
        delete[] this->data;
    }

}