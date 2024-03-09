/*
 * main.c
 *
 *  Created on: Mar 9, 2024
 *      Author: Dell
 */
#include "stdio.h"
#include <conio.h>
void main(){
int num,i,fact;
printf("Enter an integer: ");
fflush(stdout);
scanf("%d",&num);
fact=1;
if(num<0)
	printf("Error!!! Factorial of negative number doesn't exist.");
else if(num==0)
	printf("Factorial = %d",fact);
else{
	for(i=1; i<=num; i++)
		fact*=i;
	printf("Factorial = %d",fact);
}

}


