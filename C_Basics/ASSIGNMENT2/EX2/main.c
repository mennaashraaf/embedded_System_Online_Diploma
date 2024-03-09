/*
 * main.c
 *
 *  Created on: Mar 8, 2024
 *      Author: Menna
 */
#include "stdio.h"
#include <conio.h>
void main(){
 char ch;
printf("Enter an alphabet: ");
fflush(stdout);
scanf("%c",&ch);
if(ch=='a'|| ch=='e'|| ch=='i'|| ch=='o'|| ch=='u'|| ch=='A'|| ch=='E'|| ch=='I'||
		ch=='O'|| ch=='U'){
	printf("%c is a vowel",ch);
}
else
	printf("%c is constant",ch);
}
