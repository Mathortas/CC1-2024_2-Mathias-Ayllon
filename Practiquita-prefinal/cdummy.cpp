#include <iostream>
using namespace std;

class Cdummy{
    public:
    static int n;
    Cdummy(){
        ++n;
    }
    ~Cdummy(){
        --n;
    }
};

int Cdummy::n = 0;

int main (){
    Cdummy *a;
    if (true){
        Cdummy x;
        a = new Cdummy;
        cout << x.n << endl;
    }

    Cdummy b[3];
    Cdummy c;
    delete a;

    cout << b[0].n << endl;
    return 0;
}