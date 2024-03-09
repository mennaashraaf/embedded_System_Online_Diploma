/*
 * main.c
 *
 *  Created on: Mar 9, 2024
 *      Author: Dell
 */
#include "stdio.h"
#include <conio.h>
int main(){
char opt;
float x,y;
printf("Enter operator either + or - or * or / : ");
fflush(stdout);
scanf("%c",&opt);
printf("Enter two operands: ");
fflush(stdout);
scanf("%f %f",&x,&y);
fflush(stdout);
switch(opt){
case '+':
printf("%.3f %c %.3f = %.3f",x,opt,y,x+y);
break;

case '-':
printf("%.3f %c %.3f = %.3f",x,opt,y,x-y);
break;

case '*':
printf("%.3f %c %.3f = %.3f",x,opt,y,x*y);
break;

case '/':
printf("%.3f %c %.3f = %.3f",x,opt,y,x/y);
break;
default:
	printf("wrong operator");
	break;
}
return 0;
}


