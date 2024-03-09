/*
 * main.c
 *
 *  Created on: Mar 9, 2024
 *      Author: Menna
 */
#include "stdio.h"
#include <conio.h>
void main(){
float x,y,z;
printf("Enter three numbers: ");
fflush(stdout);
scanf("%f %f %f",&x,&y,&z);
if(x>y){
	if(x>z){
		printf("%.2f is the largest number",x);
	}
	else{
		printf("%.2f is the largest number",z);
	}
}
if(y>x){
	if(y>z)
		printf("%.2f is the largest number",y);
	else
		printf("%.2f is the largest number",z);
}
}

