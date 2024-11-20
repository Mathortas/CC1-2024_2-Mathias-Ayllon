#ifndef POINTARRAY_H
#define POINTARRAY_h

#include "Point.h"
#include <iostream>
#include <iomanip>
#include <stdexcept>
using namespace std;


class PointArray
{
private:
    size_t size;
    Point* ptr;
public:
    PointArray() : size{0} , ptr{new Point[size]} {};
    ~PointArray();

    PointArray& operator=(const PointArray& other){
    if (this!= &other) {
        delete[] ptr;
        size = other.size;
        ptr = new Point();
        for (size_t i{0} ; i < size ; ++i){
            ptr[i] = other.ptr[i];
        }
    }
}

    bool operator==(const PointArray& derecha) const {
        if (size!=derecha.size){
            return false;
        }
        for (size_t i{0} ; i < size ; ++i){
            if (ptr[i] != derecha.ptr[i]){
                return false;
            }
        }
        return true;
    }

    bool operator!=(const PointArray& derecha) const {
        if (size!=derecha.size){
            return true;
        }
        for (size_t i{0} ; i < size ; ++i){
            if (ptr[i] != derecha.ptr[i]){
                return true;
            }
        }
        return false;
    }
    Point operator[](int Index) const {
        return ptr[Index] ;
    }

    Point& operator[](int Index){
        
        return ptr[Index];
    }

    std::istream& operator>>(std::istream& is, PointArray& parr){
        for (size_t i = 0; i<parr.size, ++i){
            is >> int x;
            parr.ptr[i].setX(x);
            is >> int y;
            part.ptr[i].setY(y);
        }
        return is;
    }
};

#endif
