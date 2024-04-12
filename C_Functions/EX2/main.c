/*
 * main.c
 *
 *  Created on: Apr 12, 2024
 *      Author: Dell
 */

#include <stdio.h>
#include <conio.h>
int factorial(int x);
int main(){
	int x;
	printf("enter number: ");
	fflush(stdout);
	scanf("%d",&x);
	if(x<0){
		printf ("factorial doesn't exist");
	}
	else{
	int res = factorial(x);
	printf("factorial of number %d is %d",x,res);
	}
	return 0;
}
int factorial(int x){
	if(x==0 || x==1)
		return 1;
	return (x*factorial(x-1));

}

