#include "3DPoint.h"
#include <iostream>
#include <fstream>
using namespace std;


class Array3DPoint{
    private:
        size_t size;
        _3dPoint* ptr;
    public:
    Array3DPoint() : size(10) , ptr(new _3dPoint[size]) {};
    ~Array3DPoint() {};
    Array3DPoint(Array3DPoint& otro) : size(otro.size) {
        ptr = new _3dPoint[size];
        for (int i = 0; i < size; i++) {
            ptr[i] = otro.ptr[i];
        }
    }
    Array3DPoint& operator=(const Array3DPoint& otro){
        if (this != &otro){
            delete[] ptr;
            this->size = otro.size;
            for (int i = 0 ; i < size ; ++i){
                ptr[i] = otro.ptr[i];
            }
        }
    }
    bool operator==(const Array3DPoint& otro){
        if(this->size != otro.size)
            return false;
        for( int i = 0 ; i < size ; ++i){
            if (this->ptr[i] != otro.ptr[i])
                return false;
        }
        return true;
    }
    bool operator!=(const Array3DPoint& otro){
       if(this->size != otro.size)
           return true;
       for( int i = 0 ; i < size ; ++i){
           if (this->ptr[i] != otro.ptr[i])
               return true;
        }
        return false;
    }

    friend istream& operator>>(istream& is, Array3DPoint& A3DP){
        for(size_t i = 0 ; i < A3DP.size ; ++i){
            int x,y,z;
            is >> x >> y >> z;
            A3DP.ptr[i].setX(x);
            A3DP.ptr[i].setY(y);
            A3DP.ptr[i].setZ(z);
        }
        return is;
    }

    friend ostream& operator<<(ostream& os, Array3DPoint& A3DP){
        os << "[ ";
        for( int i = 0 ; i < A3DP.size ; ++i) {
           cout << " ";
           A3DP.ptr[i].Print();
           cout << " ,";
        }
        os << " ]";
        return os;
    }

    _3dPoint& operator[](int index) {
    if (index < 0 || index >= static_cast<int>(size)) {
        throw out_of_range("Index out of bounds");
    }
    return ptr[index]; 
    }
    const _3dPoint& operator[](int index) const {
    if (index < 0 || index >= static_cast<int>(size)) {
        throw out_of_range("Index out of bounds");
    }
    return ptr[index]; // Devuelve una referencia al elemento del arreglo
    }

    void push_back(_3dPoint val){
        _3dPoint *tmp = new _3dPoint[size+1];
        for(size_t i{0}; i < size; i++) {
            tmp[i] = ptr[i];
        }
        size++;
        delete[] ptr;
        ptr = tmp;
        ptr[size-1] = val;
        }
    
    void Insert(_3dPoint val, int pos){
        _3dPoint *tmp = new _3dPoint[size+1];
        for(size_t i{0}; i < pos; i++) {
            tmp[i] = ptr[i];
        }
        tmp[pos] = val;
        size++;
        for(size_t i{pos}; i < size; i++) {
        tmp[i+1] = ptr[i];
         }
        delete[] ptr;
        ptr = tmp;
}
    

};