#include <stdio.h>

int main (){
	
	int edad;
	char nombre [20+1];
	
	printf("Ingrese su nombre ");
	scanf("%s",&nombre);
	
	printf("Ingrese su edad ");
	scanf("%d",&edad);
	
	printf("Bienvenido  %s tienes  %d anios",nombre,edad);
	
	return 0;
}
