/*
 * main.c
 *
 *  Created on: Jun 26, 2024
 *      Author: Menna
 */
#include <stdio.h>
#include <conio.h>
struct SDistance {
	float feet;
	float inch;
};
struct SDistance Sum_Distance(struct SDistance d1 , struct SDistance d2){
	struct SDistance result;
	result.feet=d1.feet +d2.feet;
	result.inch=d1.inch+d2.inch;
	if(result.inch >=12){
		result.feet+= (int) result.inch/12;
		result.inch= result.inch -((int)result.inch/12)*12;
	}
	return result;
}
int main(){
	struct SDistance ds1,ds2,res;
	printf("Enter information for 1st distance: ");
	printf("\nEnter feet: ");
	fflush(stdout);
	scanf("%f",&ds1.feet);
	printf("\Enter inch: ");
	fflush(stdout);
	scanf("%f",&ds1.inch);
	printf("\nEnter information for 2nd distance: ");
	printf("\nEnter feet: ");
	fflush(stdout);
	scanf("%f",&ds2.feet);
	printf("\Enter inch: ");
	fflush(stdout);
	scanf("%f",&ds2.inch);
	res=Sum_Distance(ds1,ds2);
	printf("Sum of Distances = %.2f'-%.3f",res.feet,res.inch);

}

