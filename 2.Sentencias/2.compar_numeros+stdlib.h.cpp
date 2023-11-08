#include <iostream>
#include <stdlib.h>
using namespace std;
int main(){
    int in1,in2,in3,in4;
    double dn5=8;
    cout<<"Digite 3 números\n";
    cin>>in1>>in2>>in3;
    cout<<"Digite otro número para ver si es igual a los anteriores\n";
    cin>>in4;
    if ((in4==in1)||(in4==in2)||(in4==in3)){
        cout<<"El número es igual que alguno de los anteriores\n";
    }
    else if (in1>dn5)
    {
        printf("se ha comparado");
    }
    else{
        cout<<"El número es diferente a los tres anteriores\n";
    }
    
    system("pause");
    return 0;
}