/**************************************************************************************************

 Author      : Shehab Tarek
 Description : Assignment 1 - EX 4
 **************************************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main()
{

	char a;
	fflush(stdout);

	printf("Enter the character");
	fflush(stdout);
	scanf("%c" , &a);
	fflush(stdin);
	printf("ASCI for %c = %d",a,a);
	return 0;

}
