#include<stdio.h>
main()
{
	int d[] = { 10,15,18,23,28,35,47,55,68,78,96 };
	int s,low, high,mid;
	printf("�T���l s �����>>>"); scanf("%d", &s);
	low = 0; high = 10;
	while (low <= high) {
		mid = (low + high) / 2;

		if (d[mid] == s)break;

		if (d[mid] < s) {
			low = mid + 1;
		}
		else {
			high = mid - 1;
		}
	}
	if (low > high) {
		printf("������Ȃ�����");
	}
	else {
		printf("%d", mid);
	}
}