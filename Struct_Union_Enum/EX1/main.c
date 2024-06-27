/*
 * main.c
 *
 *  Created on: Jun 26, 2024
 *      Author: Menna
 */
#include <stdio.h>
#include <conio.h>
struct Sstudent {
	char name[50];
	int roll;
	float marks;
};
int main() {
	struct Sstudent s;
	printf("Enter information of Student: ");
	printf("\nEnter name: ");
	fflush(stdout);
	scanf("%s",&s.name);
	printf("Enter roll number: ");
	fflush(stdout);
	scanf("%d",&s.roll);
	printf("Enter marks: ");
	fflush(stdout);
	scanf("%f",&s.marks);
	printf("\nDisplaying information: ");
	printf("\nname: %s",s.name);
	printf("\nRoll: %d",s.roll);
	printf("\nMarks: %.2f",s.marks);
}
