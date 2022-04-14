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
	int dato1;

	dato1 = pedidoDeDatoDeUnEntero();

    printf("tu numero es  : %d",dato1);
	return EXIT_SUCCESS;
}
int pedidoDeDatoDeUnEntero(){
	int datoPedido;
	printf("ingrese un numero :");
	scanf("%d",&datoPedido);
    return  datoPedido;
}

