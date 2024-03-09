/*
 * main.c
 *
 *  Created on: Mar 9, 2024
 *      Author: Menna
 */
#include "stdio.h"
#include <conio.h>
void main(){
	int x,i,sum;
	printf("Enter an integer: ");
	fflush(stdout);
	scanf("%d",&x);
	sum=0;
	for(i=1; i<=x; i++)
		sum+=i;
	printf("sum = %d",sum);

}

