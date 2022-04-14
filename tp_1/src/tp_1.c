/*
 ============================================================================
 Name        : tp_1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int pedidoDeDatoDeUnEntero();
int main(void) {
	setbuf(stdout,NULL);
   int respuestaDeSalida;
   int opcionDelMenu;

do{
   printf("1. Ingresar Kilometros : \n");
   printf("2. ingresar Precio de Vuelos : \n");
   printf("3. Calcular todos los costos : \n");
   printf("4. Informar resultados  \n");
   printf("5. Carga forzada de datos  \n");
   printf("6. Salir \n");
  scanf("%d",&opcionDelMenu);

   switch(opcionDelMenu){
   case 1 :
	  do{
		  printf("1. Ingresar Kilometros : \n");
		  printf("2 salir : \n");
          scanf("%d",&opcionDelMenu);

	   }while(opcionDelMenu != 2);

   break;

   case 2 :

	   do{
	 		  printf("1. Ingresar Kilometros : \n");
	 		  printf("2 salir : \n");
	           scanf("%d",&opcionDelMenu);

	 	   }while(opcionDelMenu != 2);

      break;

   case 3 :

	   do{
	 		  printf("1. Ingresar Kilometros : \n");
	 		  printf("2 salir : \n");
	           scanf("%d",&opcionDelMenu);

	 	   }while(opcionDelMenu != 2);

      break;
   case 4 :

	   do{
	 		  printf("1. Ingresar Kilometros : \n");
	 		  printf("2 salir : \n");
	           scanf("%d",&opcionDelMenu);

	 	   }while(opcionDelMenu != 2);

      break;
   case 5 :

	   do{
	 		  printf("1. Ingresar Kilometros : \n");
	 		  printf("2 salir : \n");
	           scanf("%d",&opcionDelMenu);

	 	   }while(opcionDelMenu != 2);

      break;

   }


}while(opcionDelMenu != 6);


	return  0;
}

