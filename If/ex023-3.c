#include<stdio.h>
main()
{
	int su1, su2,siki;
	printf("‰‰Zq‚ğ“ü—Í:"); scanf("%d",&siki);
	printf("‚Q‚Â‚Ì®”‚ğ“ü—Í:"); scanf("%d %d", &su1, &su2);
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
		printf("‰‰Zq‚ªƒGƒ‰[‚Å‚·");
	}
}