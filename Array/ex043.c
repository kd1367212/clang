#include<stdio.h>
main()
{
	char data[] = "orange";
	int i;
	printf("������ : %s\n", &data);
	for (i = 0; data[i] != '\0'; i++) {}
	printf("�������� %d ����",i );
}