#include <stdio.h>

int sum() {
	static int scount = 5;
	int acount = 2;

	scount++;
	acount++;

	return scount + acount;
}

int main(void) {

	static int scount = 6;
	int acount = 3;

	printf("sum = %d \t", sum());
	printf("sum = %d \n", sum());

	return 0;
}