//PROGRAMACION INDIVIDUAL DE:
//Daniela Jace Olguín Montiel
//A01746612
#ifndef CANCELAR_C
#define CANCELAR_C

#include <string>
using namespace std;

class Cancelar
{
private:
    string tipoPrenda;
    string generoPrenda;
    string numeroCliente;
    int metodoCancelar;
public:

    //Constructor
    Cancelar(){
        tipoPrenda = "";
        generoPrenda = "";
        numeroCliente = "";
        metodoCancelar = 0;
    }

    //Constructor
    Cancelar(string prenda,string genero, int numero, int cancelar){
        tipoPrenda = prenda;
        generoPrenda = genero;
        numeroCliente = numero;
        metodoCancelar = cancelar;
    }

    //Getters y Setters
    string getTipoPrenda(){return tipoPrenda;}
    void setTipoPrenda(string prenda){tipoPrenda = prenda;}
    
    string getGeneroPrenda(){return generoPrenda;}
    void setGeneroPrenda(string genero){generoPrenda = genero;}

    string getNumeroCliente(){return numeroCliente;}
    void setNumeroCliente(int numero){numeroCliente = numero;}

    int getMetodoCancelar(){return metodoCancelar;}
    void setMetodoCancelar(int cancelar){metodoCancelar = cancelar;}

    //Funcion que regresa string del pago inicial sera rembolsado. 
    string pagoInicial()
    {
        string pago {}; 

        pago = "Tu pago te será rembolsado debido a que has cancelado tu pedido, gracias." ;


        return pago;
    }

    //Funcion que regresa un string de que la cancelación fue exitosa.
    int confirmaCancelar()
    {
        string resultado {};

        resultado = "Tu cancelación ha sido exitosa, podemos tardarnos 1 semana para rembolsar, te sera depositado a tu cuenta, gracias" ;
        return  resultado;
    }

    //Funcion que regresa datos de cancelar (tipo de producto, género del producto, estado \
    del producto, método de devolución)
    string print()
    {
        return "Devolucion(Tipo de Prenda: " + tipoPrenda + ", Genero de prenda: " + generoPrenda + ", Numero de cliente: " + numeroCliente+ ", Metodo de cancelación: " + to_string(metodoCancelar) + ")" ;
    }
};

#endif