#include<stdio.h>
main()
{
	int su1, su2,siki;
	printf("���Z�q�����:"); scanf("%d",&siki);
	printf("�Q�̐��������:"); scanf("%d %d", &su1, &su2);
	if (siki == 1) {
		printf("%d", su1 + su2);
	}
	else if (siki == 2) {
		printf("%d", su1 - su2);
	}
	else if (siki == 3) {
		printf("%d", su1 * su2);
	}
	else if(siki == 4){
		printf("%d", su1 / su2);
	}
	else {
		printf("���Z�q���G���[�ł�");
	}
}