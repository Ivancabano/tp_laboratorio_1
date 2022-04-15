/*
 * Utn_TomaDeDatos.h
 *
 *  Created on: 7 abr. 2022
 *      Author: USUARIO
 */

#ifndef UTN_TOMADEDATOS_H_
#define UTN_TOMADEDATOS_H_


int tomarUnEntero(int *punteroNumeroIngresado,int maximo,int minimo,char * mensajeLimites,char * mensajeError ,int contadorDeIntentos);

int tomarUnFlotante(float *punteroNumeroIngresado, float maximo,float minimo,char * mensajeLimites,char * mensajeError ,int contadorDeIntentos);

int tomarUnEnteroSinMaximo(int *punteroNumeroIngresado,int minimo,char * mensajeLimites,char * mensajeError ,int contadorDeIntentos);

int tomarUnFlotanteSinMaximo(float *punteroNumeroIngresado,float minimo,char * mensajeLimites,char * mensajeError ,int contadorDeIntentos);
#endif /* UTN_TOMADEDATOS_H_ */
