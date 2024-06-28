//ex069.c 解答
#include<stdio.h>
main()
{
	int su, kei=0,cnt=0;
	printf("整数：");
	
	while (scanf("%d",&su) != -1)//ctrl+Zが押されたらループを終了する
								//EOF または -1で良い
	{
		kei += su;
		cnt++;
		printf("整数：");
	}

	printf("合計=%d 平均=%.2f", kei, (float)kei / cnt);
}