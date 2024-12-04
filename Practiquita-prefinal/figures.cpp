#include <iostream>
class Polygon{
    protected:
        int w,h;
    public:
        Polygon(int a, int b ) : w(a) , h(b) {
            std::cout<< "constructor con width y height inicializado " << std::endl;
        }
        /*int area (void) {return 0;}*/ //Cambiar area a virtual pura
        virtual int area() const = 0;
        void printarea(){
            std::cout << this->area() << std::endl;
        }
};

class Rectangle : public Polygon{
    public:
    Rectangle(int a , int b) : Polygon(a,b) {};
    virtual int area() const override{
        return w*h;
    }
};

class Triangle : public Polygon{
    public:
    Triangle(int a , int b) : Polygon(a,b) {};
    virtual int area() const override{
        return (w*h) / 2;
    }
};

void printArr(Polygon* arr[], int size){
    for (int i = 0 ; i < size ; i++){
        std::cout << arr[i]->area() << std::endl;
    }
}
int main(){
    Polygon* arr[3];
    arr[0] = new Triangle(1,2);
    arr[1] = new Rectangle(2,4);
    arr[2] = new Triangle(5,10);

    printArr(arr, 3);
}