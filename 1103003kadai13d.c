// 1103003 kada13d.c
#include<stdio.h>

void putting(char* p_moji1, char* p_moji2);

main()
{
	char moji1[256] = "関数", moji2[] = "わかるかな？";

	printf("配列 moji1 : %s\n", moji1);
	printf("配列 moji2 : %s\n", moji2);

	putting(moji1, moji2);
	
	printf("連結されたあとの文字列 moji1 : %s", moji1);
}
void putting(char* p_moji1, char* p_moji2)
{
	int i;
	
	for (; *p_moji1 != '\0';p_moji1++);

	for (; *p_moji2 != '\0';p_moji1++, p_moji2++)
	{
		*p_moji1 = *p_moji2;
	}
	*(p_moji1 + 1) = '\0';
}