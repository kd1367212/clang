#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	char s[21],k[21];
	int i;
	printf("文字列を入力してください(20字以内)>>>"); scanf("%s", &s);
	srand(time(0));
	printf("暗号化文字列は、");
	for (i = 0; s[i] != '\0'; i++) {
		k[i] = rand() % 6;
		s[i] += ("%x", k[i]);
		printf("%c", s[i]);
	}
	printf("\n暗号化キーは、");
	for (i = 0; s[i] != '\0'; i++) {
		printf("%d", k[i]);
	}
}