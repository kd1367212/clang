//ex085.c ��
#include<stdio.h>

void ketugo(char* a, char* b);

main()
{
	char a[256], b[256];
	printf("�z�� a : "); gets(a);
	printf("�z�� b : "); gets(b);
	ketugo(a, b);
	printf("�z�� a : %s", a);
}

void ketugo(char* a, char* b)
{
	//'\0'�܂� a �̃A�h���X���ړ�����
	for (; *a != '\0'; a++);

	//�����J�n
	while (*b)//*b != '\0'�̊�
	{
		//a�̃A�h���X�� a[256] �� '\0' �̕������w�肵�Ă���
		//a[256] �� '\0'���� b[256] �̕�����������Ă���
		*a = *b;
		a++; b++;
	}
	//���X�g�� '\0'��������
	*a = '\0';
}