#include<stdio.h>
main()
{
	char s[100];
	int i;
	printf("�Í������������͂��Ă�������(100���ȓ�)>>>"); scanf("%s", &s);
	for (i = 0; s[i] != '\0'; i++) {
		s[i] -= 0x01;
	}
	printf("�����ςݕ�����́A");
	for (i = 0; s[i] != '\0'; i++) {
		printf("%c", s[i]);
	}
}