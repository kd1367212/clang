//ex076.c ��
#include<stdio.h>
void kei_hei(int x,int y,int*kei,float*hei);

main()
{
	//a �� b �͓��͂��ꂽ���l���i�[
	// 
	//a �� x�Ab �� y �ƘA��
	//sum �� *kei �ƘA��
	int a, b,sum;

	//�����܂ŕ\������̂� float �^�ŕϐ������
	//avg �� float�@�^�ō���Ă���̂� *hei �� float �^�ō��
	//avg �� *hei�ƘA��
	float avg;

	printf("�������Q����"); scanf("%d%d", &a, &b);

	kei_hei(a,b,&sum,&avg);

	printf("���v�� = %d�A���ς� = %.2f",sum,avg);
}

void kei_hei(int x, int y, int* kei, float* hei)
{
	//sum �Ɋi�[���邽�߂� sum �̃A�h���X�������� kei ���g��
	*kei = x + y;

	//avg �Ɋi�[���邽�߂� avg �̃A�h���X�������� hei ���g��
	*hei = ((float)(x + y) / 2);
	return;
}