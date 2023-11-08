#include <iostream>

using namespace std;

//prototipos
int pedir_tamano ();
void llenar_array (int ixArray[], int iTamano);
bool creciente (int ixarray[], int iTamano);

int main(){
    int iTam = pedir_tamano();
    int iarray [iTam];
    llenar_array(iarray,iTam);
    bool comprobar = creciente (iarray,iTam);
    if(comprobar){
        cout<<"La lista está ordenada y en orden creciente.";
    }
    else{
        cout<<"La lista no está ordenada en orden creciente.";
    }
    return 0;
}

//definiciones
int pedir_tamano (){
    int itamano;
    cout<<"Digite el tamaño de la lista a estudiar:\n";
    cin>>itamano;
    return itamano;
}

void llenar_array (int ixArray[], int iTamano){
    for (int i = 0; i < iTamano; i++){
        cout<<(i+1)<<". Digite un número.\n";
        cin>>ixArray[i];
    }
    
}

bool creciente(int ixarray [], int iTamano){
    for (int i = 0; i < (iTamano-1); i++){
        if(ixarray[i]>ixarray[i+1]){
            return false;
        }
    }
    
    return true;
}