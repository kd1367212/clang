#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int hosi, i;
	srand(time(0));
	hosi = rand() % 5 + 1;
	printf("今日のあなたの運勢は、");
	for (i = 0; i < hosi; i++) {
		printf("☆ ");
	}
	printf("です。");
}