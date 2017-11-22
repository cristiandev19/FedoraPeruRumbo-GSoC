#include<stdio.h>

int main(int argc, char const *argv[])
{
	char x[] = "HOLA COMO ESTAS";
	char *py1 ;

/*
	nota : int (*x) -> entero *x
			x -> puntero a un entero

*/

	py1 = &(x[0]);

	printf("%c\n",x[0]);
	printf("%x\n",&x[0]);
	printf("%x\n",py1);
	printf("%c\n",*py1);
	printf("%x\n",&py1);

	printf("%x\n",&(x[0]));
	for (int i =0 ; i<=4; i++){
		printf(" la direccion '%x' mas [i] de el valor de '%c' \n",&(x[i]),*(py1+i));
	}

	for(int i = 0 ; i<= 14; i++){
		printf("la letra es '%c' y su direccion '%x'\n",x[i],&x[i]);	
	}


	return 0;
}