#include <iostream>

using namespace std;

//prototipos
void cambio(int cantidad, int&, int&, int&, int&, int&);

int main(){
    int total, cien=0, cincuenta=0, diez=0, cinco=0, uno=0;
    
    cout<<"Digite la cantidad a cambiar: ";
    cin>>total;
    
    cambio(total,cien,cincuenta,diez,cinco,uno);
    
    if(cien>0){
        cout<<"\nLa cantidad de billetes de 100 es: "<<cien;
    }
    if(cincuenta>0){
        cout<<"\nLa cantidad de billetes de 50 es: "<<cincuenta;
    }
    if(diez>0){
        cout<<"\nLa cantidad de billetes de 10 es: "<<diez;
    }
    if(cinco>0){
        cout<<"\nLa cantidad de billetes de 5 es: "<<cinco;
    }
    if(uno>0){
        cout<<"\nLa cantidad de billetes de 1 es: "<<uno;
    }

    return 0;
}

//definiciones
void cambio(int cantidad, int& cien, int& cincuenta, int& diez, int& cinco, int& uno){
    cien = cantidad/100;
    cincuenta = cantidad%100/50;
    diez = cantidad%100%50/10;
    cinco = cantidad%100%50%10/5;
    uno = cantidad%100%50%10%5;
}