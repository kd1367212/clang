#include<stdio.h>
main()
{
	char hantei1, hantei2, flag;
	hantei1 = 'A'; hantei2 = 'a';
	printf("���������:"); scanf("%c", &flag);
	if (hantei1 <= flag && hantei2 > flag) {
		printf("�啶���ł�");
	}
	else {
		printf("���̑��̕����ł�");
	}
}