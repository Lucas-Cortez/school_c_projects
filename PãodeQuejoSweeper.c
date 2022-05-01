#include <stdio.h>
	
	int main () {
		
		int soma=0, lin, col, N, M, tabela[102][102];
		
		while (scanf("%d %d", &N, &M) != EOF) {
			for (lin=1; lin<=N; lin++) {
				for (col=1; col<=M; col++) {
					scanf("%d", &tabela[lin][col]);
				}
			}
			
			for (lin=1; lin<=N; lin++) {
				for (col=1; col<=M; col++) {
					if (tabela[lin][col] == 1)
						soma=9;
					else {
						if (tabela[lin-1][col]==1)
							soma++;
						
						if (tabela[lin][col+1]==1)
							soma++;
						
						if (tabela[lin+1][col]==1)
							soma++;
						
						if (tabela[lin][col-1]==1)
							soma++;
					}
					printf("%d", soma);
					soma=0;
				}
				printf("\n");
			}
		}
		
		return 0;
	}
