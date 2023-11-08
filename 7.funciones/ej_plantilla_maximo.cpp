#include <iostream>

using namespace std;

//prototipos
template <class TIPOD>
void maximo(TIPOD numero1, TIPOD numero2, TIPOD numero3);

int main(){
    int n1=10; 
    int n2=5;
    int n3=15;

    float n4=24123.1234;
    float n5=234.12;
    float n6 = 5.2341;

    maximo(n1,n2,n3);
    maximo(n4,n5,n6);

    return 0;
}

//definicion de funciones
template <class TIPOD>
void maximo(TIPOD numero1, TIPOD numero2, TIPOD numero3){
    if(numero1>numero2 && numero1>numero3){
        cout<<"El mayor es "<<numero1<<endl;
    }
    else if(numero2>numero1 && numero2>numero3){
        cout<<"El mayor es "<<numero2<<endl;
    }
    else{
        cout<<"El mayor es "<<numero3<<endl;
    }
}
