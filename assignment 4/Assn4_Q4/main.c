/*
 * Filename: main.c
 *
 * Purpose: Assignment 4 Question 4
 * 
 * Date: Feb. 2020
 *
*/

#include <stdlib.h>  // atoi()
#include <stdio.h>   // printf()

int lt(int x, int y);
int plus(int x, int y);
int minus(int x, int y);
int mul(int x, int y);


int main(int argc, char *argv[]) {
	int x = 0;
  	int y = 0;
  	int result = 0;

	if (argc == 3) {
		x = atoi(argv[1]);
		y = atoi(argv[2]);

		result = lt(x, y);
  		printf("%d < %d -> %d\n", x, y, result);

		result = plus(x, y);
  		printf("%d + %d = %d\n", x, y, result);

		result = minus(x, y);
  		printf("%d - %d = %d\n", x, y, result);

  		result = mul(x, y);
  		printf("%d * %d = %d\n", x, y, result);


	} else {
	  	printf("Must supply 2 integers arguments.\n");
	  	return 1;
	}

  return 0;
}
