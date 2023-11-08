#include <iostream>

using namespace std;

int main(){
    int iNumero1, iNumero2, iSuma, iResta, iDivision;
    cout<<"Digite el primer numero\n";
    cin>>iNumero1;
    cout<<"Digite el segundo numero\n";
    cin>>iNumero2;
    cout<<"Los números guardados son "<<iNumero1<<" y "<<iNumero2<<endl;
    iSuma = iNumero1 + iNumero2;
    iResta = iNumero1 - iNumero2;
    iDivision = iNumero1/iNumero2;
    cout<<"El resultado de la suma es: "<<iSuma<<", el resultado de la resta es: "<<iResta<<" y el de la división es: "<<iDivision;
    return 0;
}