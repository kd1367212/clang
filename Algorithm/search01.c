#include<stdio.h>
main()
{
	int d[] = { 10,5,30,77,16,3,47,29,37,33 };
	int s, i;
	printf("�T���l s �����>>>"); scanf("%d", &s);
	for (i = 0; i < 10; i++) {
		if (d[i] == s)break;
	}
	if (i == 10) {
		printf("������܂���ł���");
	}
	else {
		printf("%d", i);
	}
}