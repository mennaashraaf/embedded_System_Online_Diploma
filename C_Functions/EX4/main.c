/*
 * main.c
 *
 *  Created on: Apr 12, 2024
 *      Author: Dell
 */
#include "stdio.h"
#include <conio.h>
#include "math.h"
int power_func(int base,int pow);
int main(){
	int x,y;
	printf("enter base number: ");
	fflush(stdout);
	scanf("%d",&x);
	printf("enter power number(positive integer): ");
		fflush(stdout);
		scanf("%d",&y);
		if(y<0){
			printf("invalid power number!");
		}
		else{
		int res = power_func(x,y);
		printf("%d ^ %d = %d",x,y,res);
		}
	return 0;
}
int power_func(int base,int pow){
	if(pow==0)
		return 1;
	return base* power_func(base , pow-1);
}
