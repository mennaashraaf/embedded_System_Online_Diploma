/*
 * main.c
 *
 *  Created on: Jun 27, 2024
 *      Author: Menna
 */
#include <stdio.h>
#include<conio.h>
#define pi 3.1428
#define Area(r) pi*r*r
int main(){
	float radius;
	printf("Enter radius: ");
	fflush(stdout);
    scanf("%f",&radius);
    printf("Area = %.2f",Area(radius));
}

