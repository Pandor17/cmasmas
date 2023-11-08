#include <iostream>
#include <math.h>
using namespace std;

//prototipos de funciones
float pedir_numero();
void hacer_cuadrado(float fNumero);

//main
int main(){
float fNumero = pedir_numero();
hacer_cuadrado(fNumero);
return 0;
}

//definicion de funciones
float pedir_numero (){
    float fNum;
    cout<<"Digite un número para hacer su cuadrado: ";
    cin>>fNum;
    return fNum;
}

void hacer_cuadrado(float fNumero){
    float fCuadrado = (float)pow((double)fNumero,2.0);
    cout<<"\nEl cuadrado es: "<<fCuadrado;
}