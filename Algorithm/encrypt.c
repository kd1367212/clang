#include<stdio.h>
main()
{
	char s[100];
	int i;
	printf("文字列を入力してください(100字以内)>>>"); scanf("%s", &s);
	for (i = 0; s[i] != '\0'; i++) {
		s[i] += 0x01;
	}
	printf("暗号化文字列は、");
	for (i = 0; s[i] != '\0'; i++) {
		printf("%c", s[i]);
	}
}