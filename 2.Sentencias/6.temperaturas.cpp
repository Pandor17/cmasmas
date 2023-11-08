//Calcule la temperatura media del día, la temperatura más alta y la más baja.
#include <iostream>
using namespace std;
int main(){
    float fTemperatura[6];
    int icontador;
    cout<<"Introduzca la Tª:"<<endl;
    for(icontador=0;icontador<6;icontador++){
        cin>>fTemperatura[icontador];
    }
   
    //Hacer la media
    float fMedia=0,fMaxima=-273,fMinima=1000;

    for(icontador=0;icontador<6;icontador++){
        fMedia+=fTemperatura[icontador];
    }
    fMedia/=6;
    cout<<"La temperatura media es: "<<fMedia<<endl;

    //Hacer la máxima
    for(icontador=0;icontador<6;icontador++){
        if(fTemperatura[icontador]>fMaxima){
            fMaxima=fTemperatura[icontador];
        }
    }
    cout<<"la máxima es: "<<fMaxima<<endl;

    //mínima
    for(icontador=5;icontador>=0;icontador--){
        if(fTemperatura[icontador]<fMinima){
            fMinima=fTemperatura[icontador];
        }
    }
    cout<<"la mínima es: "<<fMinima<<endl;
    return 0;
}
