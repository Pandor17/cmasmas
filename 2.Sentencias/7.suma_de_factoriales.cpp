//suma de 1!+2!+3!+4!+...n!

#include <iostream>
using namespace std;
int main(){
    int iNumero;
    cout<<"Escriba un número\n";
    cin>>iNumero;
    int suma=0;
    for (int i = 1; i <= iNumero; i++)
    {
        int factorial=1;
        for (int x = 1; x <= i; x++)
        {
            factorial *=x;
        }
       suma+=factorial; 
    }
    cout<<"La suma del factorial es: "<<suma;
    return 0;
}