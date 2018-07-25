/*
 * constants.h
 *
 *  Created on: 25 de jul de 2018
 *      Author: vitor
 */

#ifndef CONSTANTS_H_
#define CONSTANTS_H_

	/***
	 * Server constants
	 */

	const int SERVER_PORT = 4410;

	/***
	 * Server constants
	 */

	const int CLIENT_PORT = 4411;


	const int CLIENT_ID_LENGTH = 10;

	/***
	 * Message configuration constants
	 */

	const int MESSAGE_TYPE_LENGTH = 1;
	const int MESSAGE_TOKEN_LENGTH = 20;
	const int MESSAGE_HEADER_LENGTH = MESSAGE_TYPE_LENGTH + MESSAGE_TOKEN_LENGTH;
	const int MESSAGE_BODY_LENGTH = 30;


	const int MESSAGE_ID_LENGTH = 10;
	const int MESSAGE_PASSWORD_LENGTH = 10;

	const int MESSAGE_TOPIC_LENGTH = 10;
	const int MESSAGE_BODY_CONTENT_LENGTH = MESSAGE_BODY_LENGTH - MESSAGE_TOPIC_LENGTH;

	const int MESSAGE_LENGTH = MESSAGE_HEADER_LENGTH + MESSAGE_BODY_LENGTH;


	const int MAXIMUM_ATTEMPTS = 5;


#endif /* CONSTANTS_H_ */
