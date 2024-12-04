#include <iostream>
class Polygon{
    protected:
        int width, height;
    public:
        Polygon(int a , int b ) : width(a) , height(b) {};
        virtual int area() const = 0;
        void printarea(){
            std::cout << this->area() << "\n";
        }

};


class Rectangle : public Polygon{
    public:
    Rectangle(int a , int b) : Polygon( a ,  b) {};
    virtual int area() const override{
        return width*height;
    }
};

class Triangle : public Polygon{
    public:
    Triangle(int a , int b) : Polygon (a , b ) {};
    virtual int area() const override{
        return (width*height) / 2;
    }
};

void printArea(Polygon* arr[], int size){
    for(int i = 0 ; i < size ; i++){
        arr[i]->printarea();
    }
}

int main(){
    Polygon* area[2];
    area[0] = new Triangle(5,10);
    area[1] = new Rectangle(10,2);
    printArea(area, 2);
}