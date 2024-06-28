// 1103003 kadai114.c
#include<stdio.h>
main()
{
	char data[256];

	printf("•¶š—ñ‚ÍH"); scanf("%s", data);

	printf("•¶š—ñ : ");
	int i;
	for (i = 0; data[i] != '\0'; i++)
	{
		printf("%c", data[i]);
	}
	printf("\t•¶š” = %d •¶š",i);
}