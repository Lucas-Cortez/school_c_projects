#include <stdio.h>
#include <time.h>
#include <stdlib.h>

	int main () {
		
		int x, i, num, resp=0;
				
		srand(time(0));
		x = (rand() % 50) + 1;
		
		for (i=0; i<5; i++) {
			
			printf("Digite um numero inteiro entre 1 a 50: ");
			scanf("%d", &num);
			
			if (x<num)
				printf(" -> o numero sorteado eh menor do que %d\n\n", num);
			else
				printf(" -> o numero sorteado eh maior do que %d\n\n", num);
			
			if(num == x) {
				resp = 1;
				break;
			} else {
				continue;	
			}
		}
		
		if (resp) 
			printf("Parabens, voce acertou!!! o numero era %d", x);
		else
			printf("Perdeu preiboi!! o numero era %d", x);
			
		return 0;
	}
