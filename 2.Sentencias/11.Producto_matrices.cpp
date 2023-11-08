#include <iostream>
using namespace std;
int main(){
    int matriz1[3][3];
    int matriz2[3][3];
    int producto[3][3];

    //guardar la primera matriz
    cout<<"Ingrese los valores de la primera matriz 3x3:\n";
    for(int i=0;i<3;i++){
        for(int x=0;x<3;x++){
            cin>>matriz1[i][x];
        }
    }
    //guardar la segunda matriz
    cout<<"Ingrese los valores de la segunda matriz 3x3:\n";
    for(int i=0;i<3;i++){
        for(int x=0;x<3;x++){
            cin>>matriz2[i][x];
        }
    }

    //imprimir la primera matriz
    cout<<"La primera matriz es:\n";
    for(int i=0;i<3;i++){
        for(int x=0;x<3;x++){
            cout<<matriz1[i][x]<<" ";
        }
        cout<<"\n";
    }

     //imprimir la segunda matriz
    cout<<"La segunda matriz es:\n";
    for(int i=0;i<3;i++){
        for(int x=0;x<3;x++){
            cout<<matriz2[i][x]<<" ";
        }
        cout<<"\n";
    }

    //inicializar en 0 producto
    for(int i=0;i<3;i++){
        for(int x=0;x<3;x++){
            producto[i][x]=0;
        }
    }

    //hacer producto
    for(int i=0;i<3;i++){
        for(int x=0;x<3;x++){
            for(int z=0;z<3;z++){
                producto[i][x] += matriz1[i][z]*matriz2[z][x];
            }
        }
    }

     //imprimir la matriz producto
    cout<<"producto de ambas es:\n";
    for(int i=0;i<3;i++){
        for(int x=0;x<3;x++){
            cout<<producto[i][x]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}