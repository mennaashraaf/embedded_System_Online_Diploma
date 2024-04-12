/*
 * main.c
 *
 *  Created on: Apr 12, 2024
 *      Author: Dell
 */
#include <stdio.h>
#include <conio.h>
#include <stdbool.h>
void prime_numbers(int a,int b);
int main(){
	int a,b;
   printf("enter two numbers(intervals): ");
   fflush(stdout);
   scanf("%d %d",&a,&b);
   prime_numbers(a,b);
   return 0;
}

void prime_numbers(int a,int b){
	bool flag = true ;
		for (int i=2 ; i<=a-1; i++){
			if(a%i == 0) {
				flag = false;
				break;
			}
		}
		if (flag == true) {
			printf("%d\t", a);

		}
		if(a < b){
			a++;
			prime_numbers(a,b);
		}
}
