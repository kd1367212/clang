// 1103003 kada13d.c
#include<stdio.h>

void putting(char* p_moji1, char* p_moji2);

main()
{
	char moji1[256] = "�֐�", moji2[] = "�킩�邩�ȁH";

	printf("�z�� moji1 : %s\n", moji1);
	printf("�z�� moji2 : %s\n", moji2);

	putting(moji1, moji2);
	
	printf("�A�����ꂽ���Ƃ̕����� moji1 : %s", moji1);
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