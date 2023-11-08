#include <iostream>
using namespace std;

struct persona {
    string sNombre;
    bool bDiscapacidad=true;
}pers[100];

int main(){
    int iNumero_personas,iDiscas=0,iNormalitos=0;
    cout<<"Indique el número de personas a clasificar: \n";
    cin>>iNumero_personas;
    for(int i=0;i<iNumero_personas;i++){
        cout<<"digite el "<<i+1<<"º nombre.\n";
        cin>>pers[i].sNombre;
        fflush(stdin);
        cout<<"¿tiene discapacidad? sí --> 1 // no --> 0\n";
        cin>>pers[i].bDiscapacidad;
        if(pers[i].bDiscapacidad){
            iDiscas++;
        }
        else{
            iNormalitos++;
        }
    }
    cout<<"Hay un total de "<<iDiscas<<" personas discapacitadas, y "<<iNormalitos<<" sin discapacidad reconocida.\n";
    return 0;
}