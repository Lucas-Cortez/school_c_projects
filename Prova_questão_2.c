#include <stdio.h>

	int main () {
		
		int res, a, aroda, b, broda, i;
		
		printf("Digite o valor de a: ");
		scanf("%d", &a);
		printf("Digite o valor de b: ");
		scanf("%d", &b);
		
		aroda = a;
		broda = b;
		
		if (((a<0)&&(b<0))||(b<0)) {
			aroda *= -1;
			broda *= -1;
		}
		
		for (i=0; i<broda; i++) {
			res += aroda;
		}
		
		printf("%d * %d = %d", a, b, res);
		
		return 0;
	}
