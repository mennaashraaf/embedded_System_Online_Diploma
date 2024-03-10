/*
 * main.c
 *
 *  Created on: Mar 10, 2024
 *      Author: Menna
 */
#include "stdio.h"
#include <conio.h>
#include "string.h"
void main(){
char text[50];
int i=0;
printf("Enter a string: ");
fflush(stdout);
gets(text);
while(text[i]!=0){
	i++;
}
printf("Length of string: %d",i);
}

