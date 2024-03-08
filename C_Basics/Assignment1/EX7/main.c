/*
 * main.c
 *
 *  Created on: Mar 8, 2024
 *      Author: Menna
 */
#include "stdio.h"
#include <conio.h>
void main() {
	float a,b;
   printf("Enter value of a: ");
   fflush(stdout);
   scanf("%f",&a);
   printf("Enter value of b: ");
   fflush(stdout);
   scanf("%f",&b);
   a=a+b;
   b=a-b;
   a=a-b;
   printf("after swapping value of a = %.2f\nAfter swapping value of b = %.2f",a,b);

}
