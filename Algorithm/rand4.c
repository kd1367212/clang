#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int hosi, i;
	srand(time(0));
	hosi = rand() % 5 + 1;
	printf("¡“ú‚Ì‚ ‚È‚½‚Ì‰^¨‚ÍA");
	for (i = 0; i < hosi; i++) {
		printf("™ ");
	}
	printf("‚Å‚·B");
}