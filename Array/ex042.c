#include<stdio.h>
main()
{
	char data[] = "Apple";
	int i = 0;
	printf("�P�������\��\n");
	for (i = 0; data[i] != '\0'; i++) {
		printf("%c", data[i]);
	}

	printf("\n�������\��\n");	
	printf("%s",&data[0]);
	
}