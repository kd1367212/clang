//ex075.c ��
#include<stdio.h>
void shisoku(int x, int y, int* wa, int* sa, int* sk, int* syo);

main()
{
	int a, b, c, d, e, f;
	printf("���l�P�H�F"); scanf("%d", &a);
	printf("���l�Q�H�F"); scanf("%d", &b);

	shisoku(a, b, &c, &d, &e, &f);

	puts("���l�P�Ɛ��l�Q�̎l�����Z");
	printf("wa = %d sa = %d seki = %d syo = %d", c, d, e, f);
}

void shisoku(int x, int y, int* wa, int* sa, int* sk, int* syo)
{
	//wa �� c �̃A�h���X���i�[
	*wa = x + y;

	//sa �� d �̃A�h���X���i�[
	*sa = x - y;

	//sk �� e �̃A�h���X���i�[
	*sk = x * y;

	//syo �� f �̃A�h���X���i�[
	*syo = x / y;
	return;
}