// Universidad de los Andes
// Física computacional
// Tarea 6
// Archivo con el cálculo de las funciones
// Autores:
//	Andrés Felipe García Albarracín
//	Andrea Rozo Méndez

#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#define sigma 10
#define rho 28.0
#define beta 8.0/3.0

double functionX (double t, double x, double y, double z)
{
       return (sigma*(y-x));
}

double functionY (double t, double x, double y, double z)
{
       return (x*(rho-z)-y);
}

double functionZ (double t, double x, double y, double z)
{
       return (x*y - beta*z);
}
