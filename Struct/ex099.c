//ex099.c 解答
#include<stdio.h>
#define data_end -1

struct ken
{
	int code;
	char name[20];
	struct ken* next;
};

main()
{
	struct ken	ken_data[] = {{1,"北海道",NULL},
							{2,"青森県",NULL},
							{3,"岩手県",NULL},
							{4,"宮城県",NULL},
							{5,"秋田県",NULL},
							{6,"山形県",NULL},
							{7,"福島県",NULL},
							{data_end,"",NULL},
							{28,"兵庫県",NULL}};

	struct ken* p, * wp;

	//リンク設定
	p = wp = ken_data;

	do
	{
		p++;
		wp->next = p;
		wp = p;
	} while (p->code != data_end);

	
	//青森県の next メンバの値を宮城県のアドレスに変更
	//ポインタ p に ken_data の先頭アドレスをいれる
	p = ken_data;

	//ポインタ p を使って青森県のアドレスを求める
	p++;

	//青森県の p->next に宮城県のアドレスを代入(p を使う)
	p->next = p + 2;


	for (p = ken_data; p->code != data_end; p = p->next)
	{
		printf("code = %d\tname = %s\n", p->code, p->name);
	}


}