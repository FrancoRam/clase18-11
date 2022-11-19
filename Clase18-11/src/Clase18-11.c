/*
 ============================================================================
 Name        : Clase18-11.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */
//----------------- CONSULTAR SOBRE PESO DE ARCHIVOS CSV ------------------------------

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void) {

	setbuf(stdout,NULL);

	srand(time(NULL));
	int min=1;
	int max=6;
	float numero;

	for(int i=0; i<10;i++)
	{
		numero =(float) rand() % (max-min+1)+min;
		printf("%.2f\n", numero);
	}

	return EXIT_SUCCESS;
}
