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
#include "Utn_tomaDeDatos.h"
#include "Utn_Calculos.h"


int main(void) {
	setbuf(stdout,NULL);
   int errores;
   int opcionDelMenu;
   float resultadoAumento;
   float kilomtrosTotales;
   float precioAerolineas;
   float precioLatam;

do{
   printf("1. Ingresar Kilometros : \n");
   printf("2. ingresar Precio de Vuelos : \n");
   printf("3. Calcular todos los costos : \n");
   printf("4. Informar resultados  \n");
   printf("5. Carga forzada de datos  \n");
   printf("6. Salir \n");

   errores = tomarUnEntero(&opcionDelMenu,6,1,"ingrese un numero entre 1 y 6, por la opcion del menu a la cual quiera ingresar ","numero ingresado no es valido",3);

   switch(opcionDelMenu){
   case 1 :
	  do{
		  printf("1. Ingresar Kilometros : \n");
		  printf("2 salir : \n");
		  errores = tomarUnEntero(&opcionDelMenu,2,1,"ingrese un numero entre 1 y 2, por la opcion del menu a la cual quiera ingresar ","numero ingresado no es valido",3);
           if(opcionDelMenu == 1){
        	   //toma de kilometros (declare como maximo la distacia en kilometros de la tierra a la luna)
        	   errores = tomarUnFlotante(&kilomtrosTotales,384400.0,1.0,"ingrese la cantidad de kilometros que quiere recorrer  mayor a 1klm","numero ingresado no es valido",3);
        	   printf("gracias por ingresar los klm a recorer, lo enviaremos nuevamente al menu de inicio  \n");
        	   break;
           }
	   }while(opcionDelMenu != 2);

   break;

   case 2 :

	   do{
	 		  printf("1. ingresar Precio de Vuelo por Aerolineas : \n");
	 		  printf("2. ingresar Precio de Vuelo por Latam : \n");
	 		  printf("3 salir : \n");
	 		 errores = tomarUnEntero(&opcionDelMenu,3,1,"ingrese un numero entre 1 y 3, por la opcion del menu a la cual quiera ingresar ","numero ingresado no es valido",3);

	 		 if(opcionDelMenu == 1){

	 			 errores = tomarUnFlotanteSinMaximo(&precioAerolineas,0,"ingresar un precio para Aerolineas superior a 0","precio invalido",3);
                  }
	 		 if(opcionDelMenu == 2){

	 			errores = tomarUnFlotanteSinMaximo(&precioLatam,0,"ingresar un precio para Latam superior a 0","precio invalido",3);
	 		 }
	 	   }while(opcionDelMenu != 3);

      break;

   case 3 :

	   do{
	 		  printf("1. Calcular todos los costos : \n");
	 		  printf("2 salir : \n");
	 		 errores = tomarUnEntero(&opcionDelMenu,2,1,"ingrese un numero entre 1 y 2, por la opcion del menu a la cual quiera ingresar ","numero ingresado no es valido",3);

	 	   }while(opcionDelMenu != 2);

      break;
   case 4 :

	   do{
	 		  printf("1. Informar resultados : \n");
	 		  printf("2 salir : \n");
	 		 errores = tomarUnEntero(&opcionDelMenu,2,1,"ingrese un numero entre 1 y 2, por la opcion del menu a la cual quiera ingresar ","numero ingresado no es valido",3);

	 	   }while(opcionDelMenu != 2);

      break;
   case 5 :

	   do{
	 		  printf("1. Carga forzada de datos : \n");
	 		  printf("2 salir : \n");
	 		 errores = tomarUnEntero(&opcionDelMenu,2,1,"ingrese un numero entre 1 y 2, por la opcion del menu a la cual quiera ingresar ","numero ingresado no es valido",3);

	 	   }while(opcionDelMenu != 2);

      break;

   }


}while(opcionDelMenu != 6);

printf("que tenga un lindo dia\n");
printf("la cantidad de kilometros es : %.2f",kilomtrosTotales);
printf("el precio para Aerolineas es : %.2f",precioAerolineas);
printf("el precio para Latam es : %.2f",precioLatam);

	return  0;
}

