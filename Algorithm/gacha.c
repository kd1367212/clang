#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int kazu,i;
	printf("十連ガチャ\n");
	srand(time(0));
	for (i = 0; i < 10; i++) {
		kazu = rand() % 100;
		if (kazu <= 5) {
			printf("スーパーレア\n");
		}
		else {
			printf("レア\n");
		}
	}
}