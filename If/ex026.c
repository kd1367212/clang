#include<stdio.h>
main()
{
	int mm;
	printf("�������:"); scanf("%d", &mm);
	if (mm == 1 || mm == 3 || mm == 5 || mm == 7 || mm == 8 || mm == 10 || mm == 12) {
		printf("�ŏI���� 31 ���ł�");
	}
	else if (mm == 4 || mm == 6 || mm == 9 || mm == 11) {
		printf("�ŏI���� 30 ���ł�");
	}
	else {
		printf("�ŏI���� 29 ���ł�");
	}
}