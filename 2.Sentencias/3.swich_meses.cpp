#include <iostream>
using namespace std;


int main(){
    char cMes[15];
    int iMes;
    string sMes;
    cout<<"¿Qué mes desea convertir?\n";
    cin>>cMes;
    switch(cMes){
        case "Enero": cout<<"01";break;
    }   
    
    cout<<cMes;
    return 0;
}