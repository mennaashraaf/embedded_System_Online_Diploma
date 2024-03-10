/*
 * main.c
 *
 *  Created on: Mar 10, 2024
 *      Author: Menna
 */
#include "stdio.h"
#include<conio.h>
#include "string.h"
void main(){
char text[50],ch;
int i,freq;
printf("Enter a string: ");
fflush(stdout);
gets(text);
printf("Enter character to find frequency: ");
fflush(stdout);
scanf("%c",&ch);
i=0;
freq=0;
while(text[i]!=0){
	if(text[i]==ch)
		freq++;
	i++;
}
printf("frequency of %c = %d",ch,freq);
}

