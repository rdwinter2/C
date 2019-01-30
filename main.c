/**
 * * Author: Davey Winter
 * * Date: 2019/1/30
 * *
 * * Assignment 1 problem 1
 * *
 * */
#include <stdio.h>
int integer;

int main(void)
{

	printf("Enter an integer: \n");
	scanf("%d", &integer);

	if (integer > 0 && integer % 2 == 0){
		  printf("%d is positive and even\n", integer);
	}
	else if (integer > 0 && integer % 2 == 1){
		  printf("%d is positive and odd\n", integer);
	}
	else if (integer < 0 && integer % 2 == 0){
		  printf("%d is positive and even\n", integer);
	}
	else if (integer < 0 && integer % 2 == -1){
		  printf("%d is negative and odd\n", integer);
	}
	else {
		  printf("Not an integer\n");
	}
	  return 0;
}