#include<stdio.h>
void display1(int n1);//�v���g�^�C�v�錾�@�l�n��
void display2(int* n2);//�v���g�^�C�v�錾�@�A�h���X�n��

main()
{
	int a, b;
	printf("���l�P�H�F"); scanf("%d", &a);
	display1(a);
	printf("a = %d\n\n", a);

	printf("���l�Q�H�F"); scanf("%d", &b);
	display2(&b);
	printf("b = %d", b);
}

void display1(int n1)
{
	printf("���la�́A%d�ł��B\n", n1);
	n1 += 10;
	return;
}

void display2(int* n2)
{
	printf("���lb�́A%d�ł��B\n", *n2);
	*n2 += 10;
	return;
}