#include <iostream>
#include <math.h>
using namespace std;
//suma de los cuadrados de los 10 primeros números
int main(){
    int contador;
    int suma=0;
    for(contador=1;contador<=10;contador++){
        suma += pow(contador,2);
    }
    cout<<suma;
    return 0;
}