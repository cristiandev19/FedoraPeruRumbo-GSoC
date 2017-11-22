/*
* my second program in  C 
*
* author : zodiacfireworks
*
*/

#include<stdio.h>

int main(int argc, char const *argv[])
{
	/*
	argc:: >> es el numero de argumentos que recibe nuestro programa
		cuando cuando es llamado desde la linea de comandos(y desde
		cualquier otro lado "(KHA ?? Xd)" )
		
		el primer argumento es el nombre del ejecutable por lo cual 
		si no le pasamos elementos al programa, nos imprimira 1

	argv:: >> contiene los valores de los argumentos ingresados por 
		por linea de comandos.
		
		los argumentos ingresados son separados por espacios siempre y
		cuando estos no estes entre comillas o no sean escapados
		("\<espacio>")

		los argumentos son ordenados en una lista de la sgte forma :

		argv[0] : <El nombre del programa>
		argv[1] : argumento 1
		argv[2] : argumento 2
		argv[3] : argumento 3
		argv[4] : argumento 4
		... 	: ...
		
	>> NOTAS :
		las expresiones como "%d" , "%s" son especificadores de formato
		(format especifiers).

		%d y %i son diferentes porque..

		d ->> es en formato de base 10
		i ->> es un entero normal

		
		las expresiones como "\t" o "\n" se conocen como secuencias de 
		escape

		
		[modificador] <tipo> <nombre_de_var> [= <valor_de_var>]


	*/

	for(int i=1; i< argc ; i++){		
	//	printf("%d\t", i);
		printf("%s", argv[i]);
	}
	printf("%s\n","");
}

