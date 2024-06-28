#include<stdio.h>
main()
{
	int ap[2][2][3] = { {{3,4,5},{4,5,6}},{{2,2,3},{2,5,6}} };
	int kei = 0, i, j,k;
	for (i = 0; i < 2; i++) { //アパート数
		printf("アパート%d ", i+1);

		for (j = 0; j < 2; j++) { //階数
			printf("(%d階) :", j + 1);

			for (k = 0; k < 3; k++) { //部屋数
				printf("%d ", ap[i][j][k]);
				kei += ap[i][j][k];
			}
		}
		//アパート２へ改行
		printf("\n");
	}
	
	printf("全体で %d 人住んでいます", kei);
}