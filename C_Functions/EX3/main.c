/*
 * main.c
 *
 *  Created on: Apr 12, 2024
 *      Author: Dell
 */
#include "stdio.h"
#include <conio.h>
#include <String.h>
void reverse_str(char str[],int s);
int main(){
	char sentence[30];
	puts("enter a sentence: ");
	fflush(stdout);
	gets(sentence);
	int len = strlen(sentence);
	reverse_str(sentence,len);
	return 0;
}
void reverse_str(char str[],int s){
		if(s>0){
			printf("%c",str[s-1]);
		reverse_str(str,s-1);
		}
}
