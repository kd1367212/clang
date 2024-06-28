#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int ritu;
	srand(time(0));

	ritu = rand() % 100 + 1;
	//printf("%d\n", ritu);
	if (ritu <= 30) {
		printf("‚©‚¢‚µ‚ñ‚Ì‚¢‚¿‚°‚«I");
	}
	else {
		printf("’ÊíUŒ‚");
	}
}