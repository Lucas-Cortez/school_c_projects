#include <stdio.h>
#include <stdlib.h>

	typedef struct _f {
			int ladoA;
			int ladoB;
			int per;
			int area;	
		} figura;

	int main () {
		
		figura fig;
		FILE *in;
		
		in = fopen("entrada.txt", "r");
		
		if (in == NULL) {
			printf("Arquivo entrada.txt nao encontrado/n");
			exit (1);
		}
		
		while (1) {
			fscanf(in, "%d %d", &fig.ladoA, &fig.ladoB);
			
			if(fig.ladoA==0 || fig.ladoB==0)
				break;
			
			fig.per = 2 * (fig.ladoA+fig.ladoB);
			fig.area = fig.ladoA*fig.ladoB;
			
			printf("Area do retangulo: %d\n", fig.area);
			printf("Perimetro do retangulo: %d\n\n", fig.per);
		}
		
		fclose(in);
		
		
		return 0;
	}
