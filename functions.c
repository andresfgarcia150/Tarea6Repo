// Universidad de los Andes
// F�sica computacional
// Tarea 6
// Archivo con el c�lculo de las funciones
// Autores:
//	Andr�s Felipe Garc�a Albarrac�n
//	Andrea Rozo M�ndez

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
