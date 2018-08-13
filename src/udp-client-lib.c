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
#include "messageUtils.h"
//#include "constants.h"
 #include "constants.h"


int main(void) {

	char message[MESSAGE_LENGTH];

	//buildHelloMassage("id", "senha", message);
	buildMessagePublish("SENSOR_1", "TOKEN_VITOR", -132.571, 0, message);

	printf("message: %s", message);

	float value = 0;
	char topic[MESSAGE_TOPIC_LENGTH];
	char *m = "5test112";
	proccessDataMessage(m, topic, &value);

	printf("\r\n\r\ntopic: %s | value: %f", topic, value);

	return EXIT_SUCCESS;
}
