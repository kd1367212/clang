//ex068-2.c ��
#include<stdio.h>
main()
{
	char str[200];
	printf("���������́F");
	while (gets(str) != NULL)	//str��[ ]���Ȃ��̂�
								//str�̐擪�A�h���X���珇�ɕ����񂪊i�[����Ă���
	{
		printf("%s\n", str);
		printf("���������́F");
	}
}