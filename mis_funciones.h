// mis_funciones.h

#ifndef MISFUNCIONES_H
#define MISFUNCIONES_H

// Declaración de las funciones

//funcion para calcular el logaritmo
double log(double x) {

    double resultado = 0.0;
    double terminos = (x - 1) / (x + 1);
    double terminos_al_cuadrado = terminos * terminos;
    double numerador = terminos;
    double denominador = 1.0;

    for (int n = 1; n <= 100; n += 2) {
        resultado += numerador / n;
        numerador *= terminos_al_cuadrado;
    }

    return 2.0 * resultado;
}

// funcion para calcular exponencial

double exp(double x, int iterations = 100) {
    double result = 1.0;
    double term = 1.0;

    for (int i = 1; i <= iterations; i++) {
        term *= (x / i);
        result += term;
    }

    return result;
}

//Modulo
double residuo(double num_1, double num_2) {
    int division = num_1/num_2; 
    double residuo = num_1 - division*num_2;

    return residuo;
}

//valor absoluto
double abs(double numero) {
    if (numero < 0) {
        return -numero;
    } else {
        return numero;
    }
}

// Función para calcular potencias
double potencia(double base, double exponente){
  double resultado = 1; // Inicializamos el resultado en 1

  //Usamos un bucle while para multiplicar la base por sí misma "exponente" vece
  if (exponente == int(exponente))
  {
    int counter = 0;
    while (counter < exponente) {
      resultado = resultado * base;
      counter = counter + 1;
    }

  } else {
    resultado = exp(exponente * log(base));
  }

return resultado;
}


//funcion para calcular seno
double sen(double x0) {
  float x = residuo(x0, 6.283185307);
  if (x >= 0)
  {
    x = -1 * (x - 3.14161592654);
  }
  else
  {
    x = -1 * (x + 3.14161592654);
  }
  
  double seno = x -potencia(x,3)/6 + potencia(x,5)/120 - potencia(x,7)/5040 + potencia(x,9)/362880 - potencia(x,11)/39916800 + potencia(x,13)/6227020800;

  return seno;
}

//funcion para calcular coseno
double cos(double x0) {
  float x = residuo(x0, 6.283185307);
  if (x >= 0)
  {
    x = 1 * (x - 3.14161592654);
  }
  else
  {
    x = 1 * (x + 3.14161592654);
  }
  
  double coseno = 1 - potencia(x,2)/2 + potencia(x,4)/24 - potencia(x,6)/720 + potencia(x,8)/40320 - potencia(x,10)/3628800 + potencia(x,12)/479001600;

  return -1 * coseno;
}

//funcion para calcular la raiz
double raiz(double x, double radical){
  double resultado = potencia(x, 1.0 / radical);

  return resultado;

}

//funcion para sacar tangente
double tan(double x){
  
  double seno = sen (x);
  double coseno = cos (x);
  double resultado = seno / coseno;
  
  return resultado;
}

//funcion para calcular secante 
double sec(double x){

double coseno = cos(x);
double resultado = 1.0 / cos(x);

return resultado;

}


//funcion para calcular cosecante
double csc(double x){

double seno = sen(x);
double resultado = 1.0 / sen(x);

return resultado;

}

//funcion para calcular cosecante
double cot(double x){


double resultado = 1.0 / tan(x);

return resultado;

}

//funcion para calcular arcoseno
double arcsen(double x){

double arcoseno =  x + (potencia(x,3))/6 + (3.0/40.0) * potencia(x, 5) + (15.0/336.0) * potencia(x, 7) + (105.0/3456.0) * potencia(x, 9) + (945.0/42240.0) * potencia(x, 11)
 + (10395.0/599040.0) * potencia(x, 13) + (135135.0/9676800.0) * potencia(x, 15) + (2027025.0/175472640.0) * potencia(x, 17) + (34459425.0/3530096640.0) * potencia(x, 19) 
 + (654729075.0/78033715200.0) * potencia(x, 21) + (13749310575.0/1880240947200.0) * potencia(x, 23) + (316234143225.0/49049763840000.0) * potencia(x, 25) + (7905853580625.0/1377317368627200.0) * potencia(x, 27) 
 + (229269753838125.0/41421544567603200.0) * potencia(x, 29);

return arcoseno;

}

double arccos(double x){

double arcocoseno =  1.57079633 - arcsen(x);

return arcocoseno;

}

double arctan(double x) {

double arcotangente = arcsen(x/raiz(potencia(x,2) + 1, 2));
//x - potencia(x, 3)/3 + potencia (x, 5)/5 - potencia (x, 7)/7 + potencia (x, 9)/9 - potencia(x, 11)/11 + potencia(x, 13)/13 - potencia (x,15)/15 + potencia(x, 17)/17 - potencia(x, 19)/19;
    
    return arcotangente;
}



#endif
 