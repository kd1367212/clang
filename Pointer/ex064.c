//ex064.c 解答 横に表示
#include<stdio.h>
main()
{
	char* p_ride[3] = { "car","bus","shinkansen" };
	
	//表示

	//*p_rideの配列の数が３つだから３回ループさせる
	for (int i = 0; i < 3; i++)
	{
		//*p_ride[i]から'\0'が出てくるまで繰り返す
		while (*p_ride[i])
		{
			putchar(*p_ride[i]);
			p_ride[i]++;
		}
		putchar('\n');
	}
}