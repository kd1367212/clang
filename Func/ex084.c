//ex084.c ��
#include<stdio.h>
void reverse(char* p1,char *p2);

main()
{
	char str1[256],str2[256];
	printf("������H�F"); gets(str1);
	printf("str1�F%s\n", str1);
	reverse(str1, str2);
	printf("str2�F%s", str2);
}

void reverse(char* p1, char* p2)
{
	//p1 �ɐ擪�A�h���X��ۑ�����
	char* w;
	w = p1;

	//p1 �� '\0'�܂ł��炵�P�������ĕ������w�肳����
	for (; *p1 != '\0';p1++);
	p1--;

	//p1 �̖����� p2 �̐擪�ɑ�����Ă���
	//p1 ��擪�ɂ�����(-1)�A
	//p2 �𖖔��ɂ�������(+1)
	//�����đ�����J��Ԃ�

	//w �ɐ擪�A�h���X��ۑ����Ă������̂�
	//w ��艺�ɂ������烋�[�v�𔲂���(����ւ��I��)
	for (; p1 >= w; p1--, p2++)
	{
		*p2 = *p1;
	}
	//p2 �̖�����'\0' ����
	*p2 = '\0';
}