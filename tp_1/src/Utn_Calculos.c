/*
 * Utn_Calculos.c
 *
 *  Created on: 7 abr. 2022
 *      Author: USUARIO
 */

#include <stdio.h>
#include <stdlib.h>



int calcularAumentoDescuento(float * punteroResultado,float numeroParaAumentar,float porsentajeDeAumentoDescuento){
	int retorno;
	retorno =-1;
	if(punteroResultado != NULL && numeroParaAumentar != 0){
	float numeroDeControl;

	numeroDeControl = numeroParaAumentar + numeroParaAumentar * porsentajeDeAumentoDescuento;

	* punteroResultado = numeroDeControl;

	retorno =0;
	}
	return retorno;
}


int convertirDeMonedas(float * punteroResultado,float dividendo,float divisor ){
	int retorno;
	float resultadoAuxiliar;
	retorno =-1;

	if(punteroResultado != NULL && divisor > 0 && dividendo > 0){
		retorno = 0;
		resultadoAuxiliar = dividendo / divisor;
		* punteroResultado = resultadoAuxiliar;

	}
	return  retorno;
}
