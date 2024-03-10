/*
 * main.c
 *
 *  Created on: Mar 10, 2024
 *      Author: Dell
 */
#include "stdio.h"
#include <conio.h>
void main(){
float a[2][2],b[2][2];
printf("Enter the elements of the first matrix:\n");
fflush(stdout);
int r,c;
for(r=0; r<2; r++){
	for(c=0; c<2; c++){
		printf("Enter a%d%d: ",r+1,c+1);
		fflush(stdout);
		scanf("%f",&a[r][c]);
	}
}

printf("Enter the elements of the second matrix:\n");
fflush(stdout);
for(r=0; r<2; r++){
	for(c=0; c<2; c++){
		printf("Enter b%d%d: ",r+1,c+1);
		fflush(stdout);
		scanf("%f",&b[r][c]);
	}
}
printf("Sum of Matrix:\n");
fflush(stdout);
for(r=0; r<2; r++){
	for(c=0; c<2; c++){
		printf("%.2f\t",a[r][c]+b[r][c]);
	}
	printf("\n");
}
}

