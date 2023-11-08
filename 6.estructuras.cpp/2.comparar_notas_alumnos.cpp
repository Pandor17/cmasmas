/*hacer estructura "alumno"
campos: nombre, edad, promedio,
3 alumnos
comprobar quien tiene mejor promedio e imprimirlo por pantalla junto con sus datos*/

#include <iostream>
using namespace std;

struct nota{
    float fNota[2];
    float fNotaMedia;
};

struct alumno{
    string sNombre;
    int iEdad;
    struct nota promedio;
}niniato[3];


int main(){
    //metiendo los datos
    for(int i=0;i<3;i++){
        cout<<"Intoduzca el nombre del alumno "<<i+1<<endl;
        cin>>niniato[i].sNombre;
        for(int j=0;j<2;j++){
            cout<<"Indique la nota del  examen "<<j+1<<endl;
            cin>>niniato[i].promedio.fNota[j];
        }
        niniato[i].promedio.fNotaMedia = (niniato[i].promedio.fNota[0]+niniato[i].promedio.fNota[1])/2;
    }
    
    //elegir al de mayor promedio
    //se puede hacer más rápido si haces el if justo despues de guardar datos
    //y guardas la posición en una variable nueva
    struct mejor_alumno{
        string nombre_mejor;
        float nota_media_mejor=0;
    }mejor_niniato;

    for(int i=0;i<3;i++){
        if(mejor_niniato.nota_media_mejor <= niniato[i].promedio.fNotaMedia){
            mejor_niniato.nota_media_mejor = niniato[i].promedio.fNotaMedia;
            mejor_niniato.nombre_mejor = niniato[i].sNombre;
        }
    } 
    cout<<"El alumno con mayor promedio es "<< mejor_niniato.nombre_mejor<<", con una nota media de "<<mejor_niniato.nota_media_mejor<<endl;
  
    return 0;
}