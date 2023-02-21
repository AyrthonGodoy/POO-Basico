# include <iostream>
# include <stdlib.h>
using namespace std;

class Triangulo{
    private:
        int largo;
        int ancho;
    public:
        Triangulo(int , int);
        void perimetro();
        void area();
};

// incializamos el constructor

Triangulo::Triangulo(int _largo, int _ancho){
    largo = _largo;
    ancho = ancho;
}

int main(){

    system("pause");
    return 0;
}
