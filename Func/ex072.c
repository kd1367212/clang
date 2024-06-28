#include<stdio.h>
void display(int a);

main()
{
	int a;
	printf("data ?："); scanf("%d", &a);
	display(a);
}

void display(int a)
{
	printf("入力データ = %d", a);
	return;
}