#include<stdio.h>
main()
{
	char d[21];
	int k[21], s, i;
	printf("�Í����������������͂��Ă�������>>>"); scanf("%s", &d);
	for (i = 0; d[i] != '\0'; i++) {
		printf("�����L�[%d>>>", i + 1); scanf("%x", &k[i]);
		d[i] -= k[i];
	}
	printf("�����ςݕ�����́A");
	for (i = 0; d[i] != '\0'; i++) {
		printf("%c", d[i]);
	}
}