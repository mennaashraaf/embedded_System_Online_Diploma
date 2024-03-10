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
char text[50],temp;
printf("Enter a string: ");
fflush(stdout);
gets(text);
int len = strlen(text)-1;
for(int i=len; i>=0; i--){
	printf("%c",text[i]);
}


}


