#include<stdio.h>
#include<string.h>

struct ProductoLista{
	int price;
	int quality;
	char nameProduct[20]; 
}ProductoLista[60];


struct ProductoBoleta{
	int price;
	int quality;
	char nameProduct[20]; 
}ProductoBoleta[60];


FILE *fileShop;

int main(int argc, char const *argv[])
{
	char directionFile[] ="/home/pystudent13/Escritorio/testeos/C./Tarea/fileShop.txt";
	int selectorPrimario=10,selectorSecundario;
	int iterProduct=0;
	int indexProducts=0,auxIndexPrd=0,selectProducts;
	int lector;
	char toFileName[30];
	char confirmacionBoleta[2];
	int toFileQuality,toFilePrice;
	float sumaPrecios=0;
	while (selectorPrimario >0){

		printf("Welcome to the store\n");
		printf("Choose a option \n");
		printf("1. Manage product \n");
		printf("2. Purchase product \n");
		printf("3. Generate Bill \n");
		printf("0. Exit \n");
		
		scanf("%i",&selectorPrimario);
		
		
		switch(selectorPrimario){
			case 1:
		 		printf("1. Add a product\n");
		 		printf("2. Agrega los ProductoListas que tienesa a la boleta\n");
		 		printf("3. Mira que ProductoListas tienes\n");
		 		printf("0. regresar\n");
				scanf("%d",&selectorSecundario);
		 		
		 		switch (selectorSecundario){
		 			case 1:
		 				printf("Welcome to the asistent for Adding products\n");
		 				printf("Add the product detalis here : \n");
		 				printf("Name product : ");
						scanf("%s",&ProductoLista[iterProduct].nameProduct);
		 				printf("Price product : ");
						scanf("%d",&ProductoLista[iterProduct].price);
		 				printf("Quality product : ");
						scanf("%d",&ProductoLista[iterProduct].quality);
		 				iterProduct++;
		 				printf("%i",iterProduct);
		 				break;
		 			case 2:
		 				printf("Welcome to the list of products added\n");
						for(int i=0;i<iterProduct;i++){
							printf("%s\n",ProductoLista[i].nameProduct);
							printf("%i\n",ProductoLista[i].price);
							printf("%i\n",ProductoLista[i].quality);
							}
						break;
		 			case 0:
		 			// implenterar confirmacion 
		 				printf("Estas saliendo ...\n");
		 				break;
		 			default:
		 				printf("aun no implementado\n");
		 				break;
		 		}
		 		break;

		 	case 2:
				printf("Do you want purchase product ?\n");

				printf("Los ProductoListas actuales: \n");
				indexProducts=0;
				for(int i=0;i<iterProduct;i++){
					indexProducts++;
					printf("%i\n",indexProducts);
					printf("%s\n",ProductoLista[i].nameProduct);
					printf("%i\n",ProductoLista[i].price);
					printf("%i\n",ProductoLista[i].quality);					
				}

				printf("Quieres agregar ProductoLista a la boleta ?[si][no]");
				scanf("%s",&confirmacionBoleta);
				if(strncmp(confirmacionBoleta,"si",2)==0){
					printf("Agrega el indice del producto para agregarlo");
					scanf("%i",&selectProducts);
						auxIndexPrd++;
						printf("%i\n",auxIndexPrd);
						strcpy(ProductoBoleta[auxIndexPrd].nameProduct,ProductoLista[selectProducts-1].nameProduct);
						ProductoBoleta[auxIndexPrd].price=ProductoLista[selectProducts-1].price;
						ProductoBoleta[auxIndexPrd].quality=ProductoLista[selectProducts-1].quality;
						printf("%s\n",ProductoBoleta[auxIndexPrd].nameProduct);
						printf("%i\n",ProductoBoleta[auxIndexPrd].price);
						printf("%i\n",ProductoBoleta[auxIndexPrd].quality);
						printf("Agregado correctamente ");
					
					break;
				}
				else{
					printf("Nos vemos luego\n");
				}
				//char
		 		break;


		 	case 3:
//				fileShop = fopen(directionFile,w);	

		 		printf("[1] Agregar ProductoListas a factura \n");
		 		printf("[2] Ver factura \n");
		 		printf("[0] salir \n");
		 		scanf("%i",&selectorSecundario);
		 		switch(selectorSecundario){
			 		case 1:
						printf("Seguro que quieres agregar estos Productos a tu factura ?\n");	
						printf("Los productos actuales: \n");

						for(int i=1;i<=auxIndexPrd;i++){
							printf("%s\n",ProductoBoleta[i].nameProduct);
							printf("%i\n",ProductoBoleta[i].price);
							printf("%i\n",ProductoBoleta[i].quality);
					
							sumaPrecios+=ProductoLista[i].price;	
						}

						printf("y el monto acumulado es: %f \n",sumaPrecios);
						printf("Quieres agregar a la boleta?[si][no]");
						scanf("%s",&confirmacionBoleta);
						if(strncmp(confirmacionBoleta,"si",2)==0){
							fileShop = fopen(directionFile,"a+t");	
							for(int i=0;i<auxIndexPrd;i++){
								fprintf(fileShop,"%s\n",ProductoLista[i].nameProduct);
								fprintf(fileShop,"%d\n",ProductoLista[i].price);
								fprintf(fileShop,"%d\n",ProductoLista[i].quality);
							}
							fprintf(fileShop,"#primera actualizacion\n");
							fclose(fileShop);
							break;
						}
						else{
							printf("Ok\n");
						}
						//char
		 				break;

		 			case 2:
			 			printf("Lista de compras \n");
			 			fileShop = fopen(directionFile,"rt");

			 			while((lector=fgetc(fileShop))!=EOF){
			 				if(lector=='\n'){
			 					printf("\n");
			 				}
			 				else if(lector=='#'){
			 					break;
			 				}
			 				else{
			 					putchar(lector);
			 				}
			 			}
			 			fclose(fileShop);

			 			break;
		 			case 0:
			 			printf("Ojala vuelvas pronto\n");
			 			break;
		 			default:
		 				printf("escoje una de las opciones validas");
		 				break;
					
		 		}
//				fclose(directionFile);
		 		break;
		 	case 0:
		 		printf("Este caso rompe bucle acaba programa\n");
		 		break;
		 	default:
		 		printf("El valor no es valido\n");
		 		break;
		 }	
	
	}
}
