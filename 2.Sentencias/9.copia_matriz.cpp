#include <iostream>
using namespace std;
int main(){
    int matriz1[3][3];//filas//columnas
    cout<<"Ingresa los números de la matriz.\n";
    for (int x = 0; x < 3; x++)
    {
        for (int y = 0; y < 3; y++)
        {
            cin>>matriz1[x][y];
        }
        
    }
    
//hacer traspueta
    int matriz2[3][3];
    cout<<"la matriz traspuesta es:\n";
    for (int x = 0; x < 3; x++)
    {
        for (int y = 0; y < 3; y++)
        {
            matriz2[x][y] = matriz1[y][x];
            cout<<matriz2[x][y]<<" ";
        }
        cout<<"\n";
    }

    return 0;
}