// 1103003 kadai12m.c
#include<stdio.h>
main()
{
	char str1[128];
	char str2[128];

	char* p_str1, * p_str2;

	printf("•¶š—ñ‚PH"); gets(str1);
	printf("•¶š—ñ‚QH"); gets(str2);

	p_str1 = str1; p_str2 = str2;

	for (; *p_str1 != '\0'; p_str1++);

	for (; *p_str2 != '\0'; p_str2++,p_str1++)
	{
		*p_str1 = *p_str2;
	}
	*p_str2 = '\0';

	p_str1 = str1;
	printf("str1 : %s", str1);
}