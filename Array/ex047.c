#include<stdio.h>
main()
{
	int i, j; float kei, x[3][2] = { {1.1,2.2},{3.3,4.4},{5.5,6.6} };
	for (i = 0; i < 3; i++) {
		kei = 0;
		for (j = 0; j < 2; j++) {
			printf("x[%d][%d] = %f\n", i, j, x[i][j]);
			kei += x[i][j];
		}
		printf("%d s–Ú‚Ì•½‹Ï = %f\n\n",i, x[i][j] / 2);
	}
}