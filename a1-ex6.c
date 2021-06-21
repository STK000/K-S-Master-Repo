/**************************************************************************************************

 Author      : Shehab Tarek
 Description : Assignment 1 - EX 5
 **************************************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main()
{

	float a,b,temp=0;
	fflush(stdout);

	printf("Enter the 1st Value\n");
	fflush(stdout);
	scanf("%f" , &a);
	fflush(stdin);
	printf("Enter the 2nd Value\n");
	fflush(stdout);
	scanf("%f" , &b);
	fflush(stdin);
	temp = a;
	a = b;
	b = temp;

	printf("value of a is : %f \n ",a);
	printf("value of b is : %f \n ",b);

	return 0;

}
