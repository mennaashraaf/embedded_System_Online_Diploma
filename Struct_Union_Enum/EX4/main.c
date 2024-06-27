/*
 * main.c
 *
 *  Created on: Jun 27, 2024
 *      Author: Menna
 */
#include <Stdio.h>
#include <conio.h>

struct SStudent {
	int roll;
	char name[50];
	float marks;
};
void getInfo(struct SStudent s[],int size) {
	printf("Enter information of students: ");
	for(int i=0; i<size; i++) {
		printf("\nfor roll number %d",i+1);
		s[i].roll=i+1;
		printf("\nEnter name: ");
		fflush(stdout);
		scanf("%s",&s[i].name);
		printf("Enter marks: ");
		fflush(stdout);
		scanf("%f",&s[i].marks);
	}
}
void DisplayInfo(struct SStudent s[],int size) {
	printf("\nDisplaying information of students:");
	for(int i=0; i<size; i++) {
	 printf("\nInformation for roll number %d :",s[i].roll);
	 printf("\nName: %s",s[i].name);
	 printf("\nMarks: %.2f",s[i].marks);
	 printf("\n");
	}
}
int main(){
	struct SStudent s1[3];
	getInfo(s1,3);
	DisplayInfo(s1,3);
}
