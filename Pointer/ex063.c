//ex063.c 解答
#include<stdio.h>
main()
{
	char* p_ride[3] = { "car","bus","shinkansen" };
	
	//表示

	//*p_rideの配列の数が３つだから３回ループさせる
	for (int i = 0; i < 3; i++)
	{

		//普通の配列のように使えばおっけー ※ただし「%c」ではなく「%s」で表示すること
		printf("%s\n", p_ride[i]);
	}
}