#include<stdio.h>
main()
{
	int d[] = { 10,5,30,77,16,3,47,29,37,33 };
	int s, i;
	printf("探索値 s を入力>>>"); scanf("%d", &s);
	for (i = 0; i < 10; i++) {
		if (d[i] == s)break;
	}
	if (i == 10) {
		printf("見つかりませんでした");
	}
	else {
		printf("%d", i);
	}
}