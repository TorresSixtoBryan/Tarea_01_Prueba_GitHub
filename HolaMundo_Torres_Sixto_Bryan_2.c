#include <stdio.h>

int main()
{
	char Nombre[40];
	
	printf("\nPrograma que imprime \"Hola <TU_NOMBRE>\" en la consola\n\n");
	
	printf("Escribe tu nombre completo: ");
	gets(Nombre);
	
	fflush(stdin);
	
	printf("\nHola, ");
	puts(Nombre);
	
	return(0);
}
