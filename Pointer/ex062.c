//ex062.c ��
#include<stdio.h>
main()
{
	char* p="peach";
	char data1[10] = "banana", * p_data1;
	char data2[10], * p_data2;

	//data1�Ɋi�[����Ă��镶�����data2�Ɋi�[����

	//�A�h���X���i�[
	p_data1 = data1; p_data2 = data2;

	while (*p_data1)  //���Ƃ���while(*p_data1 != '\0')�ł��邪�@!= '\0'���ȗ����邱�Ƃ��ł���
	{
		*p_data2 = *p_data1;
		p_data1++; p_data2++;
	}

	//�Ō�� '\0'���i�[
	*p_data2 = '\0';

	//p�Ɋi�[����Ă��镶�����data1�Ɋi�[����
	p_data1 = data1;

	//�ʉ�	*p��*p_data1�̃f�[�^����ꂽ���ƁA�ǂ���� +1 ���邱�Ƃ��J��Ԃ�(�u++�v�����ƒu���̂���)
	//'\0'���R�s�[����邽�߃R���p�N�g�ɂȂ�
	while (*p_data1++ = *p++);

	//�\��

	p_data1 = data1; p_data2 = data2;
	
	printf("data1[ ] = ");
	while (*p_data1)
	{
		putchar(*p_data1++);
	}

	putchar('\n');

	printf("data2[ ] = ");
	while (*p_data2)
	{
		putchar(*p_data2++);
	}
}