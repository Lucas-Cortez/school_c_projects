#include <stdio.h>

	int main () {
		
		int mordidas=1;
		float totalcomido=0, tamanholanche=0, tamanhomordida=0;
		
		scanf ("%f %f", &tamanholanche, &tamanhomordida);
		
		while (totalcomido<tamanholanche) {
			tamanholanche -= tamanhomordida;
			totalcomido += tamanhomordida;
			tamanhomordida *= 1.04;
			mordidas++;
		}
		
		printf("foram necessarias %d mordidas", mordidas);
		
		return 0;
	}
