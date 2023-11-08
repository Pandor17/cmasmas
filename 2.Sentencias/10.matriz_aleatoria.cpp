#include <iostream>
#include <stdlib.h>
using namespace std;
int main(){
    srand(time(NULL));
    int filas = 2+rand()%(3);
    int columnas = 2+rand()%(3);
    int matriz1[filas][columnas];//llenar y filas//columnas 
    
    for (int x = 0; x < filas; x++)
    {
        for (int y = 0; y < columnas; y++)
        {
            matriz1[x][y]=(0)+rand()%(5);
        }
        
    }
    
//imprimir
    
    cout<<"la matriz aleatoria es:\n";
    for (int x = 0; x < filas; x++)
    {
        for (int y = 0; y < columnas; y++)
        {
            cout<<matriz1[x][y]<<" ";
        }
        cout<<"\n";
    }

    return 0;
}