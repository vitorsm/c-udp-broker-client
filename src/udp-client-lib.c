/*
 ============================================================================
 Name        : udp-client-lib.c
 Author      : Vitor Moreira
 Version     :
 Copyright   : 
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "utils.h"

int main(void) {
	int a = 1999 / 1000;
	printf("a = %d\r\n", a);
	//convertIntToBytes(2018);
	printf("vresultado: %f", convertBytesToFloat("1273.172"));

	return EXIT_SUCCESS;
}
