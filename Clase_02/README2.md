#iso / iec buscalo 
#iso- iec 9899 : 2011 
#standar del 2011 - tambien standar del 99

c puede ser compilado o interpretado (googlea)

root data framework analisis


como se complia un prorama en c ??

- gcc -c hello_world_1.c
genera un --->>
-hello_world_1.o
obt


codigo fuente a apartir del codigo

obtiene todos los simbolos introducidos en el programa

luego que hemos compilado un programa 
debemos enlazarlo (es la 2da etapa despues del compilado)

como ??  
- gcc hello_world_1.o -o hello_world_1.exe
-

despues de eso corremos el hello_world.exe




para el segundo hola mundo 
que es --->>>> int argc, char *argv[]  ?????

son argumentos de las funcion main , pero quien llama a la funcion main
si es la funcion principal del programa??




ahora como sabemos que hicimos mal ??
codigo igual excepto

>>>  printf(x) 
sin declarar x , sin punto y coma


existen dos errores 

tiempo de compilacion  y tiempo de ejecucion






nota aparte XD

el include jala los archivos de la libreria

osea que cuando se compila trae los demas archivos y por lo tanto pesan mas




como hacemos un prog que funcione en linux y windows ??
como el getch()
que es del conio.h
