#include<stdio.h>
main()
{
	int mm;
	printf("月を入力:"); scanf("%d", &mm);
	if (mm == 1 || mm == 3 || mm == 5 || mm == 7 || mm == 8 || mm == 10 || mm == 12) {
		printf("最終日は 31 日です");
	}
	else if (mm == 4 || mm == 6 || mm == 9 || mm == 11) {
		printf("最終日は 30 日です");
	}
	else {
		printf("最終日は 29 日です");
	}
}