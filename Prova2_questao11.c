#include <stdio.h>
	
	int main () {
		
		int l, c, colmenor=0, linmenor=0, menor, tabela[10][10];
		
		for (l=0;l<10;l++) {	
			for (c=0;c<10;c++) {
				scanf("%d", &tabela[l][c]);
				
				if ((l==0) && (c==0)) {
					menor = tabela[l][c];
					continue;
				} else
					if (tabela[l][c] < menor) {
						menor = tabela[l][c];
						linmenor=l;
						colmenor=c;	
					}
			}
		}
		
		printf("\n");
		
		for (c=colmenor;c<10;c++) {
			printf("%d ", tabela[linmenor][c]);
		}
		
		linmenor++;
		
		for (l=linmenor;l<10;l++) {	
			for (c=0;c<10;c++) {
				printf("%d ", tabela[l][c]);
			}
		}
				
		return 0;
	}
