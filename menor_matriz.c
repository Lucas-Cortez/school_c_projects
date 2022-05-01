#include <stdio.h>
	
	int main () {
		
		float tabela[5][10];
		int i, l, c, colmenor, menor;
		
		for (l=0;l<5;l++) {	
			for (c=0;c<10;c++) {
				scanf("%f", &tabela[l][c]);
				
				if ((l==0) && (c==0)) {
					menor = tabela[l][c];
					continue;
				} else
					if (tabela[l][c] < menor)
						menor = tabela[l][c];	
			}
		}
		
		menor++;
		
		for (c=0;c<10;c++) {
			for (l=0;l<5;l++) {
				if (tabela[l][c] < menor) {
					menor = tabela[l][c];
					colmenor = c;
				}	
			}
		}
		
		for (l=0;l<5;l++) {
			printf("%.1f\n", tabela[l][colmenor]);
		}
				
		return 0;
	}
