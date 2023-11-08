#include <iostream>
using namespace std;
int main()
{
    int iN1, iN2;
    cout<<"Digite un número entre 1 y 2\n";
    cin>>iN1;
    switch (iN1){
        case 1: cout<<"mu bien";break;
        case 2: cout<<"bien también";break;
        default: cout<<"se ve que no sabes leer";
    }
    return 0;
}