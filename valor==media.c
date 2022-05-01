#include <stdio.h>

	int main () {
		
		int j=0, i=0;
		float media=0, numeros[10];
		
		for (i=0;i<10;i++) {
			scanf("%f", &numeros[i]);
			media+=numeros[i];
		}
		
		media=media/10;
		i=0;
		
		for (i=0;i<10;i++) {
			if (numeros[i]==media) 
				j++;
		}
		
		if (j)
			printf("O valor %.1f eh igual a media\n", media);
		else 
			printf("Nenhum valor eh igual a media\n");
		
		return 0;
	}
