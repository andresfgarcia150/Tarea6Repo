// Universidad de los Andes
// Física computacional
// Tarea 6
// Archivo con el cálculo de las pendientes
// Autores:
//	Andrés Felipe García Albarracín
//	Andrea Rozo

/**
* Calcula los coeficientes de las pendientes k1, k2, k3 y k4
*/
void calK(double t, double x, double y, double z, double h, double *k1, double *k2, double *k3, double *k4)
{
	k1[0] = functionX(t,x,y,z);
	k1[1] = functionY(t,x,y,z);
	k1[2] = functionZ(t,x,y,z);

	k2[0] = functionX(t+h/2,x+k1[0],y+k1[1],z+k1[2]);
	k2[1] = functionY(t+h/2,x+k1[0],y+k1[1],z+k1[2]);
	k2[2] = functionZ(t+h/2,x+k1[0],y+k1[1],z+k1[2]);

	k3[0] = functionX(t+h/2,x+k2[0],y+k2[1],z+k2[2]);
	k3[1] = functionY(t+h/2,x+k2[0],y+k2[1],z+k2[2]);
	k3[2] = functionZ(t+h/2,x+k2[0],y+k2[1],z+k2[2]);

	k4[0] = functionX(t+h/2,x+k3[0],y+k3[1],z+k3[2]);
	k4[1] = functionY(t+h/2,x+k3[0],y+k3[1],z+k3[2]);
	k4[2] = functionZ(t+h/2,x+k3[0],y+k3[1],z+k3[2]);
}

/**
* Calcula el vector de pendientes
*/
double slopeXYZ(double t, double x, double y, double z, double h, double *k1, double *k2, double *k3, double *k4, double *slope)
{
	calk(t, x, y, z, h, k1, k2, k3, k4);
	slope[0] = (k1[0] + 2*k2[0] + 2*k3[0] + k4[0])/6;
	slope[1] = (k1[1] + 2*k2[1] + 2*k3[1] + k4[1])/6;
	slope[2] = (k1[2] + 2*k2[2] + 2*k3[2] + k4[2])/6;
}
