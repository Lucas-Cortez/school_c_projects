#include <stdio.h>

	int main () {
		
		int x, y, z;
		
		printf("Digite o primeiro numero inteiro: ");
		scanf("%d", &x);
		
		printf("Digite o segundo numero inteiro: ");
		scanf("%d", &y);
		
		printf("Digite o terceiro numero inteiro: ");
		scanf("%d", &z);
		
		if ((x>y) && (x>z)) {
			printf("O maior numero eh: %d\n", x);
			} else if ((y>z) && (y>x)) {
					printf("O maior numero eh: %d\n", y);
				} else {
						printf("O maior numero eh: %d\n", z);
					}
					
		return 0;	
	}
