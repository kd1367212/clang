#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int hosi, i;
	srand(time(0));
	hosi = rand() % 5 + 1;
	printf("�����̂��Ȃ��̉^���́A");
	for (i = 0; i < hosi; i++) {
		printf("�� ");
	}
	printf("�ł��B");
}