/*
 * utils.h
 *
 *  Created on: 25 de jul de 2018
 *      Author: vitor
 */

#ifndef UTILS_H_
#define UTILS_H_

/***
 * Convert from integer value to byte array as a string
 */
char *convertIntToBytes(int value);

/***
 * Convert from float value to byte array as a string
 */
char *convertFloatToBytes(float value);

/***
 * Convert from byte array to int value
 */
int convertBytesToInt(char *value);

/***
 * Convert from byte array to float value
 */
float convertBytesToFloat(char *value);

/***
 * Compare if values are equals ignore void value
 */
int compareBytesIgnoreCase(char *value1, char *value2);

#endif /* UTILS_H_ */
