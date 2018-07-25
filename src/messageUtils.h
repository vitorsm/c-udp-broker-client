/*
 * messageUtils.h
 *
 *  Created on: 25 de jul de 2018
 *      Author: vitor
 */

#ifndef MESSAGEUTILS_H_
#define MESSAGEUTILS_H_




char *buildMessagePublish(char *topic, float value);
char *buildMessagePublish(char *topic, int value);


#endif /* MESSAGEUTILS_H_ */
