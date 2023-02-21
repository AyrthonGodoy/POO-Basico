# include <iostream>
# include <stdlib.h>
using namespace std;

class Persona{
    private: //atributos
        int edad;
        string nombre;
    public: //metodos
        
        Persona(int, string); // Constructor, nos ayuda a incializar nuestros atributos
        void leer();
        void correr();

};
// Constrictor, nos sirve para inicializar los atributos
// inicializamos el constructor
Persona::Persona(int _edad, string _nombre){
    edad = _edad;
    nombre = _nombre;
}

//Metodos

void Persona::leer(){
    cout<<"Soy "<<nombre<<" y estoy leyendo un libro"<<endl; 
}

void Persona::correr(){
    cout<<"Soy "<<nombre<<" y estoy corriendo una maraton"<<endl; 

}


int main(){
    //Creacion de un objeto
    Persona p1 = Persona(20, "Cristian");
    Persona p2(19, "Luis");
    p1.leer();
    p2.correr();

    system("pause");
    return 0;
}