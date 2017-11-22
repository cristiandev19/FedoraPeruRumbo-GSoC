#include<stdio.h>
#include<stdlib.h>

/*
	#include<stlib.h> -->>> contiene las variables para valores de 
		de retorno:

		EXIT_SUCESS - 0
		EXIT_FAILURE - 1



*/

int main(void){

	/* variables */
	char x  = 'x';
	char y1[]  = "hola";
	char y2[]  = {'h','o','l','a','\0'};
	// porque \0  ? para que no salga holahola 
	// porque es una secuencia de escape


/*
	& ->> se llama "ampersand" 
	&<var_name> retorna la direccion de memoria de la variable
	[A]mpersand = [A]ddress (Direccion)

	*<var_name>  Es una variable que recibira una direccion de memoria

*/
	char *z = &x;


	/* cuerpo del programa */

	printf("Variable 'x'\n");
	printf("Valor : '%c'\n",x);
	printf("Direccion : '%x'\n",&x);

	
	printf("Variable 'y1'\n");
	printf("Valor : '%c'\n",y1);
	printf("Direccion : '%x'\n\n",&y1);


	printf("Variable 'y2'\n");
	printf("Valor : '%c'\n",y2);
	printf("Direccion : '%x'\n\n",&y2);

// char *z = &x;
// z : La direccion de x (&x)
// *z: El valor de x (x)

	printf("Variable 'z'\n");
	printf("Valor : '%c'\n",*z);
	printf("Direccion : '%x'\n\n",z);


	//printf("%c\n",*z);



	/* Valor de retorno*/
	return EXIT_SUCCESS;
}