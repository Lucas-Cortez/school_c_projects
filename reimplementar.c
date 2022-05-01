#include <stdio.h>

	int main () {
		
		int x;
		
		scanf("%d", &x);
		
		switch (x) {
			
			case 0 :
				printf("a = 0 ou a = 1\n");
			break;
			
			case 1 :
				printf("a = 0 ou a = 1\n");
			break;
			
			case 2 :
				printf("a = 2\n");
			break;
			
			case 3 :
				printf("a = 3\n");
			break;
			
			default :
				printf("Valor Invalido\n");
		}
		
		return 0;
	}
