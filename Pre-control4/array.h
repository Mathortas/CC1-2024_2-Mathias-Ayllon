#ifndef ARRAY_H
#define ARRAY_H
using namespace std;
#include <iostream>
#include <fstream>
class Array{
    friend ostream& operator<<(ostream& os , const Array&);
    friend istream& operator>>(ostream& is, const Array&);

    public: 
        explicit Array(int = 10);
        Array (const Array&);
        ~Array();
        size_t getSize() const;
        
        Array& operator=(const Array&);

        bool operator==(const Array& );
        bool operator!=(const Array& );

        int operator[](int);
        int operator[](int) const;

    public:
        size_t size;
        int* ptr;
};

Array::Array(int z= 10) : size(z) {}

Array::~Array() {
    cout << "destructor llamado" << endl;
    delete this;
}

size_t Array::getSize() const{
    return size;
}

Array::Array(const Array& otro) : size(otro.size) {
    ptr = new int[size];
    for (int i = 0 ; i < size ; ++i){
        ptr[i] = otro.ptr[i];
    }
}
Array& Array::operator=(const Array& otro){
    if (this != &otro){
        delete[] ptr;
        this->size = otro.size;
        for (int i = 0 ; i < size ; ++i){
            ptr[i] = otro[i];
        }
    }
}

bool Array::operator==(const Array& otro) {
    if (this->size != otro.size)
        return false;
    for (int i = 0 ; i < this->size ; ++i ){
        if(this->ptr[i] != otro.ptr[i])
            return false;
    }
    return true;
}

bool Array::operator!=(const Array& otro){
    if (this->size != otro.size)
        return true;
    for (int i = 0 ; i < this->size ; ++i){
        if(this->ptr[i] == otro.ptr[i])
            return true;
    }
    return false;
}

int Array::operator[](int index) const{
    return ptr[index];
}

int Array::operator[](int index){
    return ptr[index];
}

ostream& operator<<(ostream& os, const Array& arr){
    os << "[";
    for(int i = 0 ; i < arr.size ; i++){
        os << " " << arr.ptr[i] << " ";
    }
    os << "]";
}

istream& operator>>(istream& is, const Array& arr){
    for(int i = 0 ; i < arr.size ; ++i){
        int x;
        is >> x;
        arr.ptr[i] = x;
    }
}
#endif