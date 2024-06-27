/*
 * main.c
 *
 *  Created on: Jun 26, 2024
 *      Author: Dell
 */
#include <stdio.h>
#include <conio.h>
struct SComplex {
	float real;
	float img;
};
struct SComplex AddComplex(struct SComplex x , struct SComplex y){
	struct SComplex result;
	result.real=x.real+y.real;
	result.img=x.img+y.img;
	return result;
}
int main() {
	struct SComplex a,b,c;
	printf("for 1st complex number ");
	printf("\nEnter real and imaginary numbers respectively: ");
	fflush(stdout);
    scanf("%f %f",&a.real,&a.img);
    printf("for 2nd complex number ");
    printf("\nEnter real and imaginary numbers respectively: ");
    fflush(stdout);
    scanf("%f %f",&b.real,&b.img);
    c=AddComplex(a,b);
    printf("Sum = %.2f+%.2fi",c.real,c.img);
}
