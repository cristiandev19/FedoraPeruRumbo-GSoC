En nuestra 2da sesion nos enseñaron lo siguiente
================================================

Nos hablaron acerca del ISO/IEC 9899:2011 
==================================================

El cual especifica la forma y establece la interpretacion de los programas escritos en el lenguaje C.

Tambien el como se compila y ejecuta un programa en C
================================================================


1.Primer paso
-----------------------

###Por ejemplo HolaMundo.c


#include<stdio.h>

int main(int argc, char const *argv[]){
	printf("Hello World!\n");
	return 0;
}
 



###Despues este programa se manda a gcc

/img/img1.jpg 

/img/img1.png

![img1](https://github.com/pystudent1913/FedoraPeruRumbo-GSoC/edit/master/Images/img1.jpg)
![img1](https://github.com/pystudent1913/FedoraPeruRumbo-GSoC/blob/master/Clase_02/img/img1.jpg)
"Se manda el archivo .c al gcc"

####NOTA: ¿Que es gcc?

El GNU Compiler Collection (colección de compiladores GNU) es un conjunto de compiladores creados por el proyecto GNU. [GCC](https://gcc.gnu.org/) es software libre y lo distribuye la Free Software Foundation (FSF) bajo la licencia general pública GPL.


2.Segundo paso
-----------------------

###Despues de mandar el archivo .c al gcc nos devolvera otro con la extension .o


El cual se crea despues de que se compila el codigo exitosamente(sin errores).

####NOTA:
El archivo .o pesa mas que el .c original. 
Esto porque pasa??
La respues es que para compilar el programa trae los archivos de las librerias que usaremos a nuestro programa con lo cual le aumenta el peso. :smile:

###Despues tendremos que enlazar el archivo que se genero(.o) con un archivo que usaremos para ejecutar el programa


![img2](https://github.com/pystudent1913/FedoraPeruRumbo-GSoC/edit/master/Images/img2.jpg)

"Se enlaza el archivo .o al ejecutable"


3.Tercer paso
---------------------------------

###Una vez ya obtenido el archivo ejecutable se procede a llamarlo


![img3](https://github.com/pystudent1913/FedoraPeruRumbo-GSoC/edit/master/Images/img3.jpg)

"Se ejecuta el programa"





##Tambien aprendimos algunos tipos de errores que podemos tener y como encontrarlos


Para el siguiente codigo

#include<stdio.h>

int main(int argc, char const *argv[]){
	printf(x)
	return 0;
}



Procedemos a compilarlo porque ya sabemos como se hace.

![img4](https://github.com/pystudent1913/FedoraPeruRumbo-GSoC/edit/master/Images/img4.jpg)

"Busqueda de errores"

Y nos sale esto. 
Esto nos sale porque :
	printf(x)

No hemos declarado antes la variable 'x' ademas no pusimos el punto y coma al final.

Ademas que nos sale un mensaje de error que nos da informacion acerca del error
 

## tambien aprendimos como crear un archivo makefile para automatizar el proceso de compilado y ejecutado
===========================================================================================================

El codigo esta en example_04

![img5](https://github.com/pystudent1913/FedoraPeruRumbo-GSoC/edit/master/Images/img5.jpg)

"Archivo makefile llamada"






