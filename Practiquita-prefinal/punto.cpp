#include <iostream>
#include <fstream>
using namespace std;

class Punto{
    private:
        int x;
        int y;
    public:
    Punto(int a, int b) : x(a) , y(b) {};
    int getX() const{
        return x;
    }
    
    int getY() const{
        return y;
    }
    
    void setX(int _x){
        this->x = _x;
    }
    
    void setY(int _y){
        this->y = _y;
    }

    void prntPoint(){
        cout << "(" , x , " , " , x, ")";
    }

    Punto& operator= (Punto& der){
        this->x = der.x;
        this->y = der.y;
        return *this;
    }
    bool operator==(Punto& der){
        if ((this->x != der.x) || (this->y != der.y)){
            return false;
        }
        return true;
    }
    bool operator!=(Punto& der){
        if ((this->x != der.x) || (this->y != der.y)){
            return true;
        }
        return false;
    }
    Punto operator+(const Punto& der) const {
    return Punto{x + der.x, y + der.y};
}

Punto operator-(const Punto& der) const {
    return Punto{x - der.x, y - der.y};
}

    friend istream& operator>>(istream& is, Punto& p){
        int x;
        int y;
        is >> x >> y;
        p.setX(x);
        p.setY(y);
        return is;
    }
    
    friend ostream& operator<<(ostream& os, const Punto& p) {
    os << "(" << p.x << " , " << p.y << ")";
    return os;
}



};