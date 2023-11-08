#include <iostream>

using namespace std;

//prototipos
template <class TIPOD>
void mostrar_decimales(TIPOD numero);

int main(){
    
    int num1 = 4;
    float num2 = 56.63;
    double num3 = 123.56785;

    mostrar_decimales(num1);
    mostrar_decimales(num2);
    mostrar_decimales(num3);

    return 0;
}

//definiciones
template <class TIPOD>
void mostrar_decimales(TIPOD numero){
    float decimales = numero - (int)numero;
    cout<<"\nLos decimales son: "<< decimales;
    //#include <iomanip> // Necesitas incluir esta cabecera para formatear la salida
    // Utiliza la función cout con setprecision para mostrar los decimales correctamente
    //cout << "\nLos decimales son: " << fixed << setprecision(2) << numero - static_cast<int>(numero) << endl;


}