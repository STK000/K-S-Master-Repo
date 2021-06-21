/**************************************************************************************************

 Author      : Shehab Tarek
 Description : Assignment 1 - EX 4
 **************************************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main()
{

	float a=0 , b=0 , v=0;
	fflush(stdout);

	printf("Enter Two Nums\n");
	fflush(stdout);
	scanf("%f  %f" ,&a, &b);
	fflush(stdin);
	v=a*b;

	printf("Value is: %f", v);
	return 0;

}
