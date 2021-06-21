/**************************************************************************************************

 Author      : Shehab Tarek
 Description : Assignment 2 - EX 1
 **************************************************************************************************/

#include <stdio.h>
#include <stdlib.h>



int main()
{

	int a;


	printf("Enter the Number you want to check\n");
	fflush(stdout);
	scanf("%d" , &a);
	fflush(stdin);

	if(a%2 == 0)
	{
	printf("Number of is even ");
	fflush(stdout);
	}
	else
	{
		printf("Number of is odd ");
		fflush(stdout);
	}
	return 0;

}
