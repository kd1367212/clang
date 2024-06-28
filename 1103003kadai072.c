// 1103003 kadai072.c
#include<stdio.h>
main()
{
	char flag;
	printf("アルファベット？"); scanf("%c", &flag);
	if (flag < 'a') {
		flag += 0x20;
	}
	switch (flag) {
	case 'a':
		printf("America\nAustralia");
		break;

	case'e':
		printf("England");
		break;

	case'f':
		printf("France");
		break;

	case'j':
		printf("Japan");
	}
}