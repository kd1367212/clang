#include<stdio.h>
main()
{
	int i, kei;
	kei = 0;
	for (i = 1; i <= 10; i++) {
		kei += i;
		printf("1 から %d までの和 = %d\n", i, kei);
	}
}