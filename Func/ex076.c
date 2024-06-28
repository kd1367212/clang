//ex076.c 解答
#include<stdio.h>
void kei_hei(int x,int y,int*kei,float*hei);

main()
{
	//a と b は入力された数値を格納
	// 
	//a は x、b は y と連動
	//sum は *kei と連動
	int a, b,sum;

	//小数まで表示するので float 型で変数を作る
	//avg が float　型で作っているので *hei も float 型で作る
	//avg は *heiと連動
	float avg;

	printf("整数を２つ入力"); scanf("%d%d", &a, &b);

	kei_hei(a,b,&sum,&avg);

	printf("合計は = %d、平均は = %.2f",sum,avg);
}

void kei_hei(int x, int y, int* kei, float* hei)
{
	//sum に格納するために sum のアドレスが入った kei を使う
	*kei = x + y;

	//avg に格納するために avg のアドレスが入った hei を使う
	*hei = ((float)(x + y) / 2);
	return;
}