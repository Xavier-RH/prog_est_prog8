/* Autor: Xavier Romero Hernández, Realizado: 09/02/2022 
	Programa que pida los datos de un sector circular y calcule su area.
	*/

#include <stdio.h>
#include <math.h>

int main (){
	float area, radio, angulo;
	
	printf("Calcular el area de un sector circular\n");
	printf("introduce el radio: ");
	scanf("%f",&radio);
	printf("introduce el angulo del sector: ");
	scanf("%f",&angulo);
	
	area=(M_PI*(pow(radio,2)*angulo))/360;
	
	printf("\nEl area del sector circular es de %.2f cm2",area);
	
	return 0;
}
