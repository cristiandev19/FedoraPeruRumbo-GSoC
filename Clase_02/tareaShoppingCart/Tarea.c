#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<unistd.h>

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
//	char directionFile[] ="/home/Pystudent1913/Documents/FedoraPeruRumbo-GSoC/Clase_02/tareaShoppingCart/fileShop.txt";
//  buscamos encontrar la direccion del archivo
//	char directionFile[] ="/home/fileShop.txt";
	int selectorPrimario=10,selectorSecundario=10;
	int iterProduct=0;
	char randomButton[1];
	int indexProducts=0,auxIndexPrd=0,selectProducts;
	int lector;
	char toFileName[30];
	char confirmacionBoleta[2];
	int toFileQuality,toFilePrice;
	float sumaPrecios=0;
//	char direccionActual[50];

	fileShop = fopen(system("pwd")+"fileShop.txt","w");	
	fclose(fileShop);


	while (selectorPrimario >0){

//		strcpy(direccionActual,system("pwd"));
//		printf("%s\n",direccionActual );
		printf("Welcome to the store\n");
		printf("Choose a option \n");
		printf("1. Manage product \n");
		printf("2. Purchase product \n");
		printf("3. Generate Bill \n");
		printf("0. Exit \n");
		
		scanf("%i",&selectorPrimario);
		// para linux
		system("clear");
		switch(selectorPrimario){
			case 1:
		 		printf("1. Add a product\n");
		 		printf("2. List of products\n");
		 		//printf("3. Mira que ProductoListas tienes\n");
		 		printf("0. regresar\n");
				scanf("%d",&selectorSecundario);
		 		
				system("clear");
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
		 			//	printf("%i",iterProduct);
		 				system("clear");
		 				break;
		 			case 2:
		 				printf("======================================================================\n");
		 				printf("=============== Welcome to the list of products added ================\n");
		 				printf("======================================================================\n");

		 				printf("Name Product\t\tPrice Product\t\tQuality Product\n");
		 					for(int i=0;i<iterProduct;i++){
								printf("%s\t\t\t%i\t\t\t%i\n",ProductoLista[i].nameProduct,ProductoLista[i].price,ProductoLista[i].quality);
							}
							//scanf("%i", &randomnumber);	
							printf("Input a letter to continue :");
							scanf("%s", &randomButton);	
							system("clear");
							break;
		 			
		 			case 0:
		 			// implenterar confirmacion 
		 				printf("You are going back ...\n");
		 				printf("Input a letter to continue :");
							scanf("%s", &randomButton);	
							system("clear");
		 				break;
		 			default:
		 				printf("That number is not valid\n");
		 				printf("Input a letter to go on the sub menu :");
						scanf("%s", &randomButton);	
						system("clear");
		 				break;
		 	
		 		}
		 		printf("You are going to the main menu \n");
		 		printf("Put a letter:");
				scanf("%s", &randomButton);	
				system("clear");
		 		break;

		 	case 2:
				printf("Do you want purchase this products ?\n");

			//	printf("Los ProductoListas actuales: \n");
				indexProducts=0;
				for(int i=0;i<iterProduct;i++){
					indexProducts++;
				//	printf("%i\n",indexProducts);
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
				
					printf("Input a letter to continue :");
					scanf("%s", &randomButton);	
					system("clear");printf("Agregado correctamente ");		
					break;
				}
				else{
					printf("Nos vemos luego\n");
				}
				//char
				printf("Put a letter:");
				scanf("%s", &randomButton);	
				system("clear");
		 		break;


		 	case 3:
//				fileShop = fopen(directionFile,w);	
 				printf("==================================================\n");
		 		printf("[1] Add products to the bill \n");
				printf("[2] Show bill \n");
		 		printf("[0] Exit \n");
				printf("==================================================\n");
		 		scanf("%i",&selectorSecundario);
		 		switch(selectorSecundario){
			 		case 1:
						printf("==================================================\n");
						printf("Are you sure to add the products?\n");	
						printf("Current products: \n");
						printf("==================================================\n");

						for(int i=1;i<=auxIndexPrd;i++){
							printf("%s\n",ProductoBoleta[i].nameProduct);
							printf("%i\n",ProductoBoleta[i].price);
							printf("%i\n",ProductoBoleta[i].quality);
					
							sumaPrecios+=ProductoBoleta[i].price;	
						}

						printf("the accumulated amounth is: %.3f $ \n",sumaPrecios);
						printf("Are you sure to add this products to the bill?[y][n]");
						scanf("%s",&confirmacionBoleta);
						if(strncmp(confirmacionBoleta,"y",1)==0){
							fileShop = fopen(system("pwd")+"fileShop.txt","a+t");	
							for(int i=0;i<auxIndexPrd;i++){
								fprintf(fileShop,"%s\n",ProductoLista[i].nameProduct);
								fprintf(fileShop,"%d\n",ProductoLista[i].price);
								fprintf(fileShop,"%d\n",ProductoLista[i].quality);
							}
							fprintf(fileShop,"#actualizacion\n");
							fclose(fileShop);
							printf("Input a letter to continue :");
							scanf("%s", &randomButton);	
							system("clear");
							break;
						}
						else{
							printf("See you latter :D\n");

						}
						//char
						printf("Input a letter to continue :");
						scanf("%s", &randomButton);	
						system("clear");
		 				break;

		 			case 2:
			 			printf("Lista de compras \n");
			 			fileShop = fopen(system("pwd")+"fileShop.txt","rt");

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
			 			printf("Input a letter to continue :");
						scanf("%s", &randomButton);	
						system("clear");
			 			break;
		 			case 0:
			 			printf("Ojala vuelvas pronto\n");
			 			printf("Input a letter to continue :");
						scanf("%s", &randomButton);	
						system("clear");
			 			break;
		 			default:
		 				printf("escoje una de las opciones validas\n");
		 				printf("Input a letter to continue :");
						scanf("%s", &randomButton);	
						system("clear");
		 				break;
					
		 		}
//				fclose(directionFile);
		 		printf("Input a letter to continue :");
				scanf("%s", &randomButton);	
				system("clear");
		 		break;
		 	case 0:
		 		printf("Este caso rompe bucle acaba programa\n");
		 		break;
		 	default:
		 		printf("El valor no es valido\n");
		 		printf("Input a letter to continue :");
				scanf("%s", &randomButton);	
				system("clear");
		 		break;
		 }	
	
	}
}
