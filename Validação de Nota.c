//19426860		1117	Validação de Nota	Time limit exceeded	C	1.000	02/09/2020 12:09:13

#include <stdio.h>

	int main () {
		
		float x, y, soma;
		
		do {
			
			scanf("%f", &x);		
		
			if ((x<0) || (x>10)) {
				printf("nota invalida\n");
			} else {
				soma = soma + x;
				y++;
			}				
			
		} while (y!=2);
		
		printf("media = %.2f\n", soma/2);
		
		return 0;
	}
