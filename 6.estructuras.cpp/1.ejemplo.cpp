#include <iostream>
#include <conio.h>
using namespace std;

struct Gato{
    char cRaza[20];
    int iEdad;
    float fPeso;
}gato_antonio, gato_mia, gato_tomias, gato_larry;

int main(){
    cout<<"digite la raza de Antonio\n";
    cin.getline(gato_antonio.cRaza,20,'\n');
    cout<<"la raza introducida es: "<<gato_antonio.cRaza<<"\n";
    
    getch();
    cout<<"digite la edad de Antonio\n";
    cin>>gato_antonio.iEdad;
    cout<<"la edad introducida es "<<gato_antonio.iEdad<<" años.";
    return 0;
}