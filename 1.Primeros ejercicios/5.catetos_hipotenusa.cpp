#include <iostream>
#include <math.h>
using namespace std;
int main(){
    float fCateto1,fCateto2,fHipotenusa;
    cout<<"Digite el valor del primer cateto\n";
    cin>>fCateto1;
    cout<<"Digite el valor del segundo cateto\n";
    cin>>fCateto2;
    fHipotenusa=sqrt(fCateto1*fCateto1+pow(fCateto2,2));
    cout<<"El valor de la hipotenusa es: "<<fHipotenusa;
    return 0;
}