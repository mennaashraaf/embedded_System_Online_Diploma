/*
 * main.c
 *
 *  Created on: Mar 10, 2024
 *      Author: Menna
 */
#include "stdio.h"
#include <conio.h>
void main(){
 int n,a[10],i,element,loc,temp;
 printf("Enter no of elements:");
 fflush(stdout);
 scanf("%d",&n);
 for(i=0; i<n; i++){
	 a[i]=i+1;
	 printf("%d\t",a[i]);
 }
 printf("\n");
 printf("enter the element to be inserted: ");
 fflush(stdout);
 scanf("%d",&element);
 printf("Enter the location: ");
 fflush(stdout);
  scanf("%d",&loc);
  for(i=loc-1; i<=n; i++){
	  temp=a[i];
	  a[i]=element;
	  element=temp;
  }
  for(i=0; i<=n; i++)
  	 printf("%d\t",a[i]);


}

