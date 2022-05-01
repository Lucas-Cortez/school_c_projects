#include <stdio.h>

	int main () {
		
		int F, B, M, xF, xB, xM, soma=0;
		
		scanf("%d %d %d", &F, &B, &M);
		scanf("%d %d %d", &xF, &xB, &xM);
		
		if (xF>F) 
			soma = xF - F;
		
		if (xB>B)
			soma = soma + (xB - B);
			
		if (xM>M)
			soma = soma + (xM - M);	
		
		printf("%d\n", soma);
		
		return 0;
	}
