#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int su,i;
	srand(time(0));
	for (i = 0; i < 300; i++) {
		su = rand() % 300 + 1;
		printf("%d\t", su);
	}
}