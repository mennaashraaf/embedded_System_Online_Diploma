/*
 * main.c
 *
 *  Created on: Mar 9, 2024
 *      Author: Dell
 */
#include "stdio.h"
#include <conio.h>
void main(){
	char ch;
	printf("Enter a character: ");
	fflush(stdout);
	scanf("%c",&ch);
	//65-90 && 97-122 ascii code of alphabets
	if((ch>=65 && ch<=90) || (ch>=97 && ch<=122))
		printf("%c is an alphabet",ch);
	else
		printf("%c is not an alphabet",ch);
}

