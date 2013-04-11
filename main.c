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
#include <functions.h>
#include <slopes.h>

#define tInicial 0.0
#define tFinal 30.0

int main()
{
	int i;
	double h = 0.001;
	int n_points = tFinal/h;
	double *t = malloc(n_points*sizeof(double));
	double *x = malloc(n_points*sizeof(double));
	double *y = malloc(n_points*sizeof(double));
	double *z = malloc(n_points*sizeof(double));
	double *k1 = malloc(3*sizeof(double));
	double *k2 = malloc(3*sizeof(double));
	double *k3 = malloc(3*sizeof(double));
	double *slope = malloc(3*sizeof(double));
	double Xini = 0;
	double Yini = 0;
	double Zini = 0;
	FILE 	*fileOut;

	if(!t || !x || !y || !z || !k1 || !k2 || !k3)
	{
		printf("Problema creando alguno de los arreglos");
		exit(1);
	}

	// Condiciones iniciales
	t[0] = tInicial;	
	x[0] = Xini;
	y[0] = Yini;
	z[0] = Zini;

	fileOut = fopen("fileOut.txt","w");
		fprintf(fileOut, "%f	%f	%f	%f", t[0], x[0], y[0], z[0]);
	
	for (i=1; i<n_points; i++)
	{
		t[i] = i*h + tInicial;		
		double slopeXYZ(t[i-1], x[i-1], y[i-1], z[i-1], h[i-1], *k1, *k2, *k3, *k4, *slope);
		x[i] = x[i-1] + h*slope[0];
		y[i] = y[i-1] + h*slope[1];
		z[i] = z[i-1] + h*slope[2];
		fprintf(fileOut, "%f	%f	%f	%f", t[i], x[i], y[i], z[i]);
	}
		
	
	fclose(fileOut);		
	return 0;

}
