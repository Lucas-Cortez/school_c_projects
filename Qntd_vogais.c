#include <stdio.h>
#include <string.h>

	int main () {
		
		int i, cont = 0;
		char frase[100];
		
		fgets(frase, 100, stdin);
		
		for(i=0; i<strlen(frase); i++) {
			if((frase[i]=='a')||(frase[i]=='e')||(frase[i]=='i')||(frase[i]=='o')||(frase[i]=='u'))
				cont++;
		}
		
		printf("Esse string possui %d vogais", cont);
		
		return 0;
	}
