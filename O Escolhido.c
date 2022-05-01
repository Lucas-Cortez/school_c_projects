#include <stdio.h>

	int main () {
		
		int n, i, mat, matmaior;
		float nota, notamaior=0;
		
		scanf("%d", &n);
		
		for (i=0; i<n; i++) {
			scanf("%d %f", &mat, &nota);
			
			if(nota>notamaior) {
				notamaior = nota;
				matmaior = mat;
			}	
		}
		
		if (notamaior<8) 
			printf("Minimum note not reached\n");
		else 
			printf("%d\n", matmaior);
		
		
		return 0;
	}
