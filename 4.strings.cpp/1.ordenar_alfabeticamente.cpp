#include <iostream>
#include <string.h>

using namespace std;

int main(){
    char cPalabra1[20], cPalabra2[20];
    cout<<"Escriba dos palabras\n";
    cin.getline(cPalabra1,20,'\n');
    cin.getline(cPalabra2,20,'\n');
    if(strcmp(cPalabra1,cPalabra2)==0){
        cout<<"Ambas palabras son iguales";
    }
    else if(strcmp(cPalabra1,cPalabra2)<0){
        cout<<cPalabra1<<" va antes que "<<cPalabra2;
    }
    else{
        cout<<cPalabra2<<" va antes que "<<cPalabra1;
    }
    return 0;
}