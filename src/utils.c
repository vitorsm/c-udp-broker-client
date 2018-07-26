/*
 * utils.c
 *
 *  Created on: 25 de jul de 2018
 *      Author: vitor
 */

#include "utils.h"

int countDigitNumbers(int value) {
	int count = 1;
	while (value >= 10) {
		value = value / 10;
		count++;
	}

	return count;
}

int getDividerNumber(int value) {
	int divider = 1;
	while (value >= 10) {
		value = value / 10;
		divider = divider * 10;
	}
}

char *convertIntToBytes(int value) {

	int count = countDigitNumbers(value);
	int divider = getDividerNumber(value);


	char *byteArray[count];
	int digitNumbers = count;
	for (int i = 0; i < count; i++) {
		int digit = value / divider;
		byteArray[i] = '0' + digit;
		value = value - digit * divider;
		divider = divider / 10;

		int newCount = countDigitNumbers(value);
		int difference = digitNumbers - newCount;
		while (difference > 1 && i + 1 < count) {
			i++;
			byteArray[i] = '0';
			difference--;
			divider = divider / 10;
		}

		digitNumbers = newCount;
	}

	return byteArray;
}

int convertBytesToInt(char *value) {

	int count = strlen(value);
	//int divider = pow10(count);
	int divider = 1;
	// trocar isso pela funcao pow
	for (int i = 0; i < count - 1; i++) {
		divider = divider * 10;
	}
	//int divider = (int) pow(10.0, (double) count);

	int valueReturn = 0;

	for (int i = 0; i < count; i++) {
		valueReturn += divider * (value[i] - '0');
		divider = divider / 10;
	}

	return valueReturn;
}

void getIntPartFromFloat(char *value, char *intPart, char *decimalPart) {

	int count = strlen(value);
	int isIntPart = 1;
	int countResult = 0;

	// inicializar com 0
	for (int i = 0; i < count; i++) {
		intPart[i] = 0;
		decimalPart[i] = 0;
	}

	for (int i = 0; i < count; i++) {
		if (value[i] == '.' || value[i] == ',') {
			isIntPart = 0;
			countResult = 0;
		} else {
			if (isIntPart) {
				intPart[countResult] = value[i];
			} else {
				decimalPart[countResult] = value[i];
			}
			countResult++;
		}
	}
}

float convertBytesToFloat(char *value) {

	int count = strlen(value);
	char intPart[count];
	char decimalPart[count];

	getIntPartFromFloat(value, intPart, decimalPart);

	int countDecimalPart = strlen(decimalPart);
	float mult = 1;
	// trocar isso pela funcao pow
	for (int i = 0; i < countDecimalPart; i++) {
		mult = mult / 10;
	}

	float result = convertBytesToInt(intPart);
	result += convertBytesToInt(decimalPart) * mult;

	return result;
}

