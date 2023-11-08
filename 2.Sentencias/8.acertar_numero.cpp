#include <iostream>
#include <stdlib.h>
using namespace std;
int main(){
    int inumero,icorrecto,icontador=0;
    srand(time(NULL));
    icorrecto=1+rand()%(100);
    do {
        cout<<"Digite un número del 1 al 100\n";
        cin>>inumero;
        icontador++;
        if (inumero>icorrecto){
            cout<<"El número correcto es menor del introducido.\n";
        }
        if (inumero<icorrecto){
            cout<<"El número correcto es mayor del introducido.\n";
        }
        
    }while (inumero!=icorrecto);
    cout<<"Correcto, el número era "<<icorrecto<<endl;
    cout<<"le ha costado "<<icontador<<" intentos.\n";
    return 0;
}