#include <stdio.h>
#include <string.h>

	int main () {
		
		int n, menor, tamanho, roda, isoma, i=0, j=0, k=0, l=0;
		char ent1[25], ent2[25], sai[50];
		
		scanf("%d", &n);
		
		for (i=0; i<n; i++) {
			
			isoma = 0;
			
			scanf("%s %s", &ent1, &ent2);
			
			tamanho = strlen(ent1) + strlen(ent2);
			
			if (strlen(ent1) < strlen(ent2)) 
				menor = strlen(ent1);
			else
				menor = strlen(ent2);
			
			for (j=0; j<menor; j++) {
				sai[isoma] = ent1[j];
				isoma++;
				sai[isoma] = ent2[j];
				isoma++;
			}
				
			if (strlen(ent1) < strlen(ent2)) {
				roda = strlen(ent2) - menor;
				for (k=0; k<roda; k++) {
					sai[isoma] = ent2[menor];
					isoma++;
					menor++;
				}
			} else {
				roda = strlen(ent1) - menor;
				for (k=0; k<roda; k++) {
					sai[isoma] = ent1[menor];
					isoma++;
					menor++;
				}
			}
			
			for (l=0; l<tamanho; l++) {
				printf("%c", sai[l]);
			}
			printf("\n");
			
		}
		
		return 0;
	}
