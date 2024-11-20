#include "Euro.h"
#include <iostream>
using namespace std;

int main(){
    Euro yo(4,50);
    Euro el(5,50);

    Euro dos= yo + el;

    dos.getEuro();

    Euro algn(7,90);

    Euro tres = dos - algn;

    tres.getEuro();
}