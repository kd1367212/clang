// 1103003 kadai135.c
#include<stdio.h>
main()
{
	char a[256], b[256];

	printf("•¶š—ñ(^z ‚ÅI—¹)");
	while (gets(a) != 0)
	{
		int i,cnt=0;
		for (i = 0; a[i] != '\0'; i++,cnt++);
		i--;

		int j;
		for (j = 0; cnt >= 0; j++,i--, cnt--)
		{
			b[j] = a[i];
		}

		printf("%s\n", b);

		printf("•¶š—ñ(^z ‚ÅI—¹)");
	}
}