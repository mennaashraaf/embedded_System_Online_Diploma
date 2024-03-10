/*
 * main.c
 *
 *  Created on: Mar 10, 2024
 *      Author: Menna
 */
#include "stdio.h"
#include <conio.h>
void main(){
 int r,c,i,j;
 printf("Enter rows and columns of matrix: ");
 fflush(stdout);
 scanf("%d %d",&r,&c);
 printf("Enter elements of matrix:\n");
 int a[20][20];
 for(i=0; i<r; i++){
	 for(j=0; j<c; j++){
		 printf("a%d%d: ",i+1,j+1);
		 fflush(stdout);
		 scanf("%d",&a[i][j]);

	 }
 }
 printf("Entered matrix:\n");
 for(i=0; i<r; i++){
 	 for(j=0; j<c; j++){
 		 printf("%d\t",a[i][j]);
 	 }
 	 printf("\n");
  }

printf("Transpose of Matrix:\n");
int t[20][20];
for(i=0; i<c; i++){
 	 for(j=0; j<r; j++){
 		 t[i][j]=a[j][i];
 		 printf("%d\t",t[i][j]);
 	 }
 	 printf("\n");
  }
}

