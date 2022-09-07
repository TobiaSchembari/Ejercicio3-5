/*
 ============================================================================
 Name        : Ejercicio3-5.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
int Restar1(int, int);
int Restar2(void);
void Restar3(int, int);
void Restar4(void);
int main(void) {
	setbuf(stdout, NULL);
	/*Realizar un programa en donde se puedan utilizar los prototipos de la
	función Restar en sus 4 combinaciones.
	 int Restar1(int, int);
	 int Restar2(void);
	 void Restar3(int, int);
	 void Restar4(void);*/
	Restar1(4,3);
	Restar2();
	Restar3(3,2);
	Restar4();
	return EXIT_SUCCESS;

}
int Restar1(int numero1 ,int numero2){
	int resultado;

	resultado = numero1 - numero2;

	return resultado;
};
int Restar2(void){
	int resultado;
	int numero1;
	int numero2;
	printf("Ingrese un numero entero: ");
	scanf("%d",&numero1);
	printf("Ingrese otro numero: ");
		scanf("%d", &numero2);
	resultado = numero1 - numero2;
	return resultado;
};
void Restar3(int num1, int num2){
	int resultado;
	resultado = num1 - num2;
	printf("El resultado de la resta es: %d", resultado);
};
void Restar4(void){
	int resultado;
		int numero1;
		int numero2;
	printf("Ingrese un numero entero: ");
		scanf("%d",&numero1);
		printf("Ingrese otro numero: ");
			scanf("%d", &numero2);
		resultado = numero1 - numero2;
		printf("El resultado de la resta es: %d", resultado);
};
