#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main()
{
	int i;
	for (i = 0; i<10; i++)
	{
		char nombre[256] = "nombre";
		char num[5];
		sprintf(num,"%d",i);
		strcat(nombre,num);
		strcat(nombre,".txt");
		printf("%s\n", nombre);
	}
}
