// 1103003 kadai12l.c
#include<stdio.h>
main()
{
	char data[256];
	char* p;

	printf("������H"); gets(data);

	p = data;
	int cnt;
	for (cnt = 0; *p != '\0'; cnt++, p++);
	printf("�������́A %d �����ł�", cnt);
}