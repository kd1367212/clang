#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	char s[21],k[21];
	int i;
	printf("���������͂��Ă�������(20���ȓ�)>>>"); scanf("%s", &s);
	srand(time(0));
	printf("�Í���������́A");
	for (i = 0; s[i] != '\0'; i++) {
		k[i] = rand() % 6;
		s[i] += ("%x", k[i]);
		printf("%c", s[i]);
	}
	printf("\n�Í����L�[�́A");
	for (i = 0; s[i] != '\0'; i++) {
		printf("%d", k[i]);
	}
}