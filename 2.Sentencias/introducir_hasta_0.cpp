#include <iostream>

using namespace std;

int main()
{
    int inumero [50];
    int in1;
    int contador=0;
    
        do{
           printf("Escriba un número entero\n");
           cin>>in1;
           if (in1 == 0){
            cout<<"Los números introducidos son: "<<endl;
            for (int i=0;i<contador;i++){
                cout<<inumero[i];
                cout<<"-";
            }
           }
           else 
           inumero [contador] = in1;
           contador++;
        }   
        while(in1!=0);
       
    return 0;
    
}


