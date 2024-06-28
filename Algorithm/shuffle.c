#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int data[20], i, target,w;

	for (i = 0; i < 20; i++) {

		data[i] = i;
		
		printf("%d ", data[i]);

	}

	printf("\n");

	srand(time(0));
	
	for (i = 0; i < 20; i++) {

		target = rand() % 20;

		w = data[i];

		data[i] = data[target];

		data[target] = w;

	}

	for (i = 0; i < 20; i++) {
		
		printf("%d ", data[i]);
	}
}