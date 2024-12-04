#ifndef ARRAY_H
#define ARRAY_H
#include <iostream>

class Array{
    friend std::ostream& operator<<(std::ostream& os, const Array& arr){
        os << "[";
        for(int i = 0 ; i < arr.size ; i++){
            os << arr.ptr[i];
        }
        os << "]";
        return os;
    };
    friend std::istream& operator>>(std::istream& is, const Array& arr){
        for (int i = 0 ; i < arr.size ; i++){
            is >> arr.ptr[i];
        }
        return is;
    };
    public:
        explicit Array(int = 10);
        Array(const Array&);
        ~Array();
        size_t getSize() const;
        const Array& operator=(const Array& right){
            delete[] ptr;
            size = right.size;
            ptr = new int();
            for (int i = 0 ; i < size ; i++){
                ptr[i] = right.ptr[i];
            }
            return *this;
        };
        bool operator==(const Array& right) const{
            if (this->size != right.size)
                return false;
            for( int i = 0 ; i < size ; i++){
                if (ptr[i] != right.ptr[i])
                    return false;
            }
            return true;
        };
         bool operator!=(const Array& right) const{
            if (this->size != right.size)
                return true;
            for( int i = 0 ; i < size ; i++){
                if (ptr[i] != right.ptr[i])
                    return true;
            }
            return false;
        };

        int& operator[](int index){
            return ptr[index];
        };
        int& operator[](int index) const{
            return ptr[index];
        };
    private:
    size_t size;
    int* ptr;
};

Array::Array(int i) : size(i) , ptr(new int[size]) {};

Array::~Array() {
    std::cout << "Destructor llamado" << std::endl;
    delete this;
}

Array::Array(const Array& r) : size(r.size) {
    for(int i = 0; i < r.size ; ++i){
        this->ptr[i] = r[i];
    }
};

size_t Array::getSize() const{
    return this->size;
}
#endif


int main(){
    Array arr1(2);
    arr1[0] = 5;
    arr1[1] = 2;
    std::cout << arr1 << std::endl;
    Array arr2(arr1);
    std::cout << arr2 << std::endl;
    if (arr1 == arr2)
        std::cout << "Son iguales" << std::endl;
    std::cin>>arr2;
    if (arr1 != arr2)
        std::cout << "En efecto,  son diferentes" << std::endl;
}