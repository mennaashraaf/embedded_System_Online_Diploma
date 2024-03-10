/*
 * main.c
 *
 *  Created on: Mar 10, 2024
 *      Author: Menna
 */
#include "stdio.h"
#include <conio.h>
void main(){
	int n,search,i;
	int a[10];
	printf("Enter no of elements: ");
	fflush(stdout);
	scanf("%d",&n);
	for(i=0; i<n; i++)
		scanf("%d",&a[i]);
	printf("Enter the element to be searched: ");
	fflush(stdout);
	scanf("%d",&search);
	for(i=0; i<n; i++){
		if(a[i]==search){
			printf("Number found at location = %d",i+1);
			break;
		}
	}
	if(i==n)
		printf("Number not found");
}

