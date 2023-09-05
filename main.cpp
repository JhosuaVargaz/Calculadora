#include <iostream>
#include "mis_funciones.h"


double funcion_a_integrar (double x) {
    double y = arctan(x);
    return y;
}


int main() { 
    
    double a; //inicializacion del limite inferior
    double b; //inicializacion del limite superior
    long int n = 100000; //numero de iteraciones
    double area = 0; //inicializacion del area acumulada 
    double ancho; //inicializacion del ancho de los rectangulos
    int counter = 0; //inicializacion del contador de iteraciones
    double x; //inicializacion de la variable de la funcion
    double altura; //inicializacion de la altura de los rectangulos
    double rectangulo; //inicializacion del area de cada rectangulo

    std::cout << "¿Cuál es tu límite inferior de integración? "; //request del limite inferior de integreacion
    std::cin >> a;

    std::cout << "¿Cuál es tu límite superior de integración? "; //request del limite superior de integreacion
    std::cin >> b; 

    ancho = (b-a)/n; //asignacion de valor a la variable ancho

    while (counter <= n) 
    //asignacion de valores a las variables
    {
         x = a + ancho * counter; 
         altura = funcion_a_integrar(x); 
         rectangulo = ancho * altura; 
         area = area + rectangulo; 
         counter = counter + 1; 

        
        //double pot = potencia(x, 1.0 / 3);
        // double ln = log(x);
        // double aux = 0.5 * ln;
        // double resultado = exp(0.5 * ln);
        //double test = 1.0 / 3;
        //double aprox = sen(altura);

        //double coseno = cos(x);
       //double angulo = residuo(x, 6.283185307);

       //double logaritmo = log(x);

    
       // std::cout << x << std::endl;
        //std::cout << "tan " << tan << std::endl;
        // std::cout << "logaritmo " << ln << std::endl;
        // std::cout << "resultado " << resultado << std::endl;
        //std::cout << "test " << test << std::endl;
        // std::cout << "aux " << aux << std::endl;
        // std::cout << "-------------------" << std::endl;
        // std::cout << "residuo" << altura << std::endl;
        //std::cout << "seno " << seno << std::endl;
        // std::cout << "aprox" << aprox << std::endl;

         
    }

    std::cout << area << std::endl; //impresion del resultado








    



    

}

