#include<stdio.h>
main()
{
	char data[] = "Apple";
	int i = 0;
	printf("１文字ずつ表示\n");
	for (i = 0; data[i] != '\0'; i++) {
		printf("%c", data[i]);
	}

	printf("\n文字列を表示\n");	
	printf("%s",&data[0]);
	
}