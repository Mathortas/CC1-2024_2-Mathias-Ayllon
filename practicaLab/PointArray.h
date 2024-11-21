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
    PointArray() : size{5} , ptr{new Point[size]} {};
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
    return *this;
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
    Point& operator[](int index) {
        if (index < 0 || index >= static_cast<int>(size)) {
            throw out_of_range("Index out of bounds");
        }
        return ptr[index];
    }

    const Point& operator[](int index) const {
        if (index < 0 || index >= static_cast<int>(size)) {
            throw out_of_range("Index out of bounds");
        }
        return ptr[index];
    }

    friend istream& operator>>(istream& is, PointArray& parr) {
        for (size_t i = 0; i < parr.size; ++i) {
            int x, y;
            is >> x >> y;
            parr.ptr[i].setX(x);
            parr.ptr[i].setY(y);
        }
        return is;
    }

    friend ostream& operator<<(ostream& os, PointArray& parr){
        os << "[ ";
        for (int i = 0; i<parr.size ; ++i){
            parr.ptr[i].print();
        }
        os << " ]";
        return os;
    }
};
PointArray::~PointArray() {
    delete[] ptr;  

#endif
