/*
 * main.c
 *
 *  Created on: Mar 9, 2024
 *      Author: Menna
 */
#include "stdio.h"
#include <conio.h>
void main(){
float x;
printf("Enter a number: ");
fflush(stdout);
scanf("%f",&x);
if(x<0)
	printf("%.2f is negative",x);
else if(x>0)
	printf("%.2f is positive",x);
else
	printf("you entered zero");

}

