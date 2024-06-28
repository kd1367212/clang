// 1103003 kadai116.c
#include<stdio.h>
main()
{
	char a[256], b[256],dumy[256];

	printf("•¶š—ñ‚PH"); gets(a);
	printf("•¶š—ñ‚QH"); gets(b);
	
	int cnt;
	for (cnt = 0; a[cnt] != '\0'; cnt++);

	int i;
	for (i = 0; b[i] != '\0'; i++)
	{
		a[cnt + i] = b[i];
	}
	a[cnt + i] = '\0';

	printf("%s", a);
}