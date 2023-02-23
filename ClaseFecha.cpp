//Sobre carga de constructores

# include <iostream>
# include <stdlib.h>
using namespace std;

class Fecha{
    // Creamos los atributos
    private:    
        int dia, mes, anio;
    public: 
        // Constructor 1
        Fecha(int, int, int);
        //Constructor 2
        Fecha(long);
        //Metodos
        void MostrarFecha();
};

// 9/01/2017  ---- 20170109
//inicializamos el constructor 1
Fecha::Fecha(int _dia, int _mes, int _anio){
    dia = _dia;
    mes = _mes;
    anio = _anio;
}
Fecha::Fecha(long fecha){
    anio = int(fecha/10000); // Extraer el año
    mes = int((fecha - anio * 10000)/100); // Extraer mes
    dia = int(fecha - anio *10000 - mes*100); //Extraer el dia

}

//Metodos 
void Fecha::MostrarFecha(){
    cout <<"Esta es la fecha "<<dia<<"/"<<mes<<"/"<<anio<<endl;
}



int main(){
    Fecha f1(12, 01, 2015);
    Fecha f2(20180109);
    f1.MostrarFecha();
    f2.MostrarFecha();
    system("pause");
    return 0;
}