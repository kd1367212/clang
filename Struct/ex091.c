//ex091.c 解答
#include<stdio.h>
struct profile
{
	char name[20];
	int birth[3];
	char blood[5];
}

main()
{
	struct profile student;
	struct profile* p;
	p = &student;

	//p->name は先頭アドレスを指定している
	printf("名前を入力 : "); scanf("%s",p->name);

	printf("生年月日を空白で区切って入力 : ");

	//p->birth[ ] と指定しているのでアドレスを指定するために & をつける
	scanf("%d %d %d", &p->birth[0], &p->birth[1], &p->birth[2]);

	printf("血液型を入力 : "); scanf("%s",student.blood);

	printf("%s  %d 年 %d 月 %d 日生 血液型 %s 型", p->name,p->birth[0],
		p->birth[1],p->birth[2], p->blood);
}