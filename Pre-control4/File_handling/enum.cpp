#include <iostream>
using namespace std;

enum fut_t { GK , LB , CB1, CB2, RB, CDM , CM1 , CM2 , LW , CF, RW};

int main() {
    fut_t Barcelona[11];
    Barcelona[0] = GK;
    Barcelona[1] = CB1;

    cout << "El portero del Barcelona es el " << GK +1 << endl;
}
