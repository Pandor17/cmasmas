#include <iostream>
using namespace std;
int main(){
    int iCadena[10] = {2,4,6,8,0,1,3,5,7,9};
    int ix, iy, iaux;

    //Algoritmo método BURBUJA
    for (ix = 0; ix < 10; ix++){
        for (iy = 0; iy < 10; iy++){
            if(iCadena[iy]>iCadena[iy+1]){
                iaux=iCadena[iy];
                iCadena[iy]=iCadena[iy+1];
                iCadena[iy+1]=iaux;
            }
        }
        
    }
    //sacar por orden ascendente por ej.
    for (int i = 0; i < 10; i++)
    {
        cout<<iCadena[i]<<" ";
    }
    

    return 0;
}