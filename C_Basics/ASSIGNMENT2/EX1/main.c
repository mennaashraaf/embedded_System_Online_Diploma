/*
 * main.c
 *
 *  Created on: Mar 8, 2024
 *      Author: Dell
 */
#include "stdio.h"
#include <conio.h>
void main(){
int x;
printf("enter an integer you want to check: ");
fflush(stdout);
scanf("%d",&x);
if(x%2==0)
	printf("%d is even",x);
else
	printf("%d is odd",x);
}

