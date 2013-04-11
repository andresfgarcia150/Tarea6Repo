// Universidad de los Andes
// Física computacional
// Tarea 6
// Archivo con el programa principal
// Autores:
//	Andrés Felipe García Albarracín
//	Andrea Rozo Méndez

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <math.h>

#define tInicial 0.0
#define tFinal 3.0

int main()
{
	int i;
	double h = 0.001;
	int n_points = tFinal/h;
	double *t = malloc(n_points*sizeof(double));
	double *x = malloc(n_points*sizeof(double));
	double *y = malloc(n_points*sizeof(double));
	double *z = malloc(n_points*sizeof(double));

	double x0 = drand48();
	double y0;
	double z0;
		
	printf("%f\n",x0);
		
	return 0;
}
