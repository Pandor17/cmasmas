#include <iostream>
using namespace std;
int main(){
    float fA,fB,fC,fD,fResultado;
    cout<<"Indique el valor de A:\n";
    cin>>fA;
    cout<<"Indique el valor de B:\n";
    cin>>fB;
    cout<<"Indique el valor de C:\n";
    cin>>fC;
    cout<<"Indique el valor de D:\n";
    cin>>fD;
    
    fResultado = (fA+fB)/(fC+fD);
    cout.precision(3);
    cout<<"El resultado es "<<fResultado;
    return 0;
}