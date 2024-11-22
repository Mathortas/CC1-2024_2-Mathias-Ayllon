#ifndef _3DPOINT_H
#define _3DPOINT_H
#include <iostream>
class _3dPoint {
    private:
        int x{1},y{1},z{1};
    public:
    
    _3dPoint() {};

    _3dPoint(int _x, int _y, int _z) : x(_x) , y(_y) , z(_z) {
        std::cout<< "Constructor llamado para 3 coords" << std::endl;
    }
    _3dPoint(int _x, int _y) : x{_x} , y(_y) {
        std::cout<< "Constructor llamado para 2 coords (x,y)" << std::endl;
    }
    ~_3dPoint() {}

    int getX() const  { return this->x;    }

    int getY() const  { return this->y;    }

    int getZ() const  { return this->z;    }

    void setX(int _x)   { this->x = _x;    }

    void setY(int _y)   { this->y = _y;    }

    void setZ(int _z)   { this->z = _z;    } 

    void Print() const{ std::cout << "[" << this->x << "," << this->y << "," << this->z << "]"; }
    //Operadores matematicos
    
    friend _3dPoint operator+( const _3dPoint& e1 , _3dPoint& e2){
        return _3dPoint(e1.x + e2.x , e1.y + e2.y , e1.z + e2.z);
    }

    friend _3dPoint operator-(const _3dPoint& e1 , _3dPoint& e2){
        return _3dPoint(e1.x - e2.x , e1.y - e2.y , e1.z - e2.z);
    }
    
    friend _3dPoint operator*(const _3dPoint& e1 , _3dPoint& e2){
        return _3dPoint(e1.x * e2.x , e1.y * e2.y , e1.z * e2.z );
    }

    friend _3dPoint operator*(const _3dPoint&e1, int m){
        return _3dPoint(e1.x * m , e1.y * m , e1.z * m);
    }
    //Operador de asignacion
    
    _3dPoint& operator=(const _3dPoint& otro){
        this->x = otro.getX();
        this->y = otro.getY();
        this->z = otro.getZ();
        return *this;
    }
    
    //Operadores de comparacion
    bool operator==(const _3dPoint& derecha){
        if ((this->x != derecha.x) || (this->y == derecha.y) || (this->z == derecha.z))
            return false;
        return true;
    }
    
    bool operator!=(const _3dPoint& derecha){
        if ((this->x != derecha.x) || (this->y == derecha.y) || (this->z == derecha.z))
            return true;
        return false;
    }

};


#endif