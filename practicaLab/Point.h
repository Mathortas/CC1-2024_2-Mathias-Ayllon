//Implementar o usar la clase Point,  que tiene dos variables miembro 'x' y 'y' que son de tipo entero.
//Hacer funciones de acceso y modificacion y funciones necesarias
 
#ifndef __POINT_H__
#define __POINT_H__
#include <iostream>
#include <iomanip>
#include <stdexcept>
using namespace std;
class Point
{
    private:    
        int x{0}, y{0};
    public:
        Point();

        Point(int, int);
        void setX(int);
        void setY(int);
        int getX() const;
        int getY() const;
        void print() const;
        bool operator==(const Point& derecha) const {
            if ( (this->x != derecha.x) || (this->y != derecha.y) )
                return false;
            return true;
        }

        bool operator!=(const Point& derecha) const {
              if ( (this->x != derecha.x) || (this->y != derecha.y) )
                return true;
              return false;
        }

        Point& operator=(const Point& otro){
            this->x = otro.getX();
            this->y = otro.getY();
            return *this;
        }
};

Point::Point(int _x, int _y) : x{_x}, y{_y} {}

void Point::setX(int _x){
    this->x = _x;
}

void Point::setY(int _y) {
    this->y = _y;
}

int Point::getX() const {
    return this->x;
}

int Point::getY() const{
    return this->y;
}

void Point::print() const {
    std::cout << "(" << x << ", " << y << ")";
}

Point::Point() : x{0}, y{0} {}  // Default constructor definition

#endif