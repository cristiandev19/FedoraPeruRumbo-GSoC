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

![img2](https://github.com/pystudent1913/FedoraPeruRumbo-GSoC/blob/master/Clase_02/img/img2.jpg)

"Se enlaza el archivo .o al ejecutable"


3.Tercer paso
---------------------------------

###Una vez ya obtenido el archivo ejecutable se procede a llamarlo


![img3](https://github.com/pystudent1913/FedoraPeruRumbo-GSoC/blob/master/Clase_02/img/img3.jpg)

"Se ejecuta el programa"





##Tambien aprendimos algunos tipos de errores que podemos tener y como encontrarlos


Para el siguiente codigo

#include<stdio.h>

int main(int argc, char const *argv[]){
	printf(x)
	return 0;
}



Procedemos a compilarlo porque ya sabemos como se hace.


![img4](https://github.com/pystudent1913/FedoraPeruRumbo-GSoC/blob/master/Clase_02/img/img4.jpg)


"Busqueda de errores"

Y nos sale esto. 
Esto nos sale porque :
	printf(x)

No hemos declarado antes la variable 'x' ademas no pusimos el punto y coma al final.

Ademas que nos sale un mensaje de error que nos da informacion acerca del error
 

## tambien aprendimos como crear un archivo makefile para automatizar el proceso de compilado y ejecutado
===========================================================================================================

El codigo esta en example_04

![img4](https://github.com/pystudent1913/FedoraPeruRumbo-GSoC/blob/master/Clase_02/img/img4.jpg)

"Archivo makefile llamada"




Estudiamos tambien los punteros en C
====================================

Hoy aprendimos que son los punteros y como usarlos :D


"Los apuntadores son variables cuyos valores son direcciones de memoria. Por lo general, una variable con-
tiene directamente un valor específico. Por otro lado, un apuntador contiene la dirección de una variable que
contiene un valor específico. En este sentido, el nombre de una variable hace referencia directa a un valor, y
un apuntador hace referencia indirecta a un valor."
-Libro Deitel &Deitel(CÓMO PROGRAMAR EN
C/C++ y Java,pag 233)

# Para empezar veremos como se declara un puntero 

![img1](https://github.com/pystudent1913/FedoraPeruRumbo-GSoC/blob/master/Clase_02/img/Esquemapunteros.jpg)

# Para enterder mejor haremos unos pequeños usos de estos

![img1](https://github.com/pystudent1913/FedoraPeruRumbo-GSoC/blob/master/Clase_02/img/Esquemaunteros2.jpg)

# Y los compilaremos 

![img1](https://github.com/pystudent1913/FedoraPeruRumbo-GSoC/blob/master/Clase_02/img/Ejecutado.png)



Y estructuras 
==================

"Las estructuras son tipos de datos derivados, que se construyen por medio de objetos de otros tipos. Conside-
re la siguiente definición de una estructura:

struct carro {
	char ruedas;
	char timon;
};

La palabra reservada struct introduce la definición de una estructura. El identificador carta es la etiqueta
de la estructura, la cual da nombre a la definición de la estructura y se utiliza con la palabra reservada struct
para declarar variables de tipo estructura."
-Deitel & Deitel(CÓMO PROGRAMAR EN
C/C++ y Java,pag 355)


Un ejemplo de estructura visto en clase.

![img1](https://github.com/pystudent1913/FedoraPeruRumbo-GSoC/blob/master/Clase_02/img/Estructuras1.png)

Y su respectiva compilacion.

![img1](https://github.com/pystudent1913/FedoraPeruRumbo-GSoC/blob/master/Clase_02/img/Compilacion.png)

#NOTA: El codigo completo se encuentra en example_04 hello_structs_01.c





