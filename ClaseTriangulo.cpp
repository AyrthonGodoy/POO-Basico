# include <iostream>
# include <stdlib.h>
using namespace std;
// Creamos la clase Triangulo
class Triangulo{
    //Creamos nuestro atributos
    private:
        int largo;
        int ancho;
    //Creamos nuestro metodos
    public:
        Triangulo(int , int);
        void perimetro();
        void area();
};

// incializamos el constructor

Triangulo::Triangulo(int _largo, int _ancho){
    largo = _largo;
    ancho = _ancho;
}

void Triangulo::perimetro(){
    float peri = (2 * largo) + ancho;
    cout << "El perimetro del triangulo es : "<<peri<<endl;

}
void Triangulo::area(){
    float are = ((float)largo * ancho)/2;
    cout << "El area del triangulo es : "<<are<<endl;
}

int main(){
    Triangulo tr1 = Triangulo(6, 10);
    Triangulo tr2(5, 7);
    tr1.perimetro();
    tr2.area();

    system("pause");
    return 0;
}
