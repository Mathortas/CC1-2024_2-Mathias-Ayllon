#include "3DPoint.h"
#include "Array3DPoint.h"
#include <iostream>
using namespace std;

int main(){

    Array3DPoint x;
    
    cout << "Array inicial :";
    cout << x << endl;

    x[2] = x[1] + x[3];
    x[4] = x[2] * 3;
    x[5] = x[2] * x[4];

    cout << "Array cuando modificamos x[2], x[4] y x[5]" << endl;

    cout << x << endl;

    cout << "Array cuando hemos hecho insert y hemos hecho push_back" << endl;
    _3dPoint m(4,5,6);
    x.Insert(m,3);
    _3dPoint k(4,5,1);

    x.push_back(k);

    cout << x;

    cout << endl << "Se puede apreciar, que la memoria se libero con los metodos insert y push_back" << endl;
}