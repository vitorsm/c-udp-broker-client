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

	proccessDataMessage(message, topic, &value);

	return EXIT_SUCCESS;
}
