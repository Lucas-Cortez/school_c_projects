#include <stdio.h>
	
	int main () {
		
		float M[12][12], res=0;
		int linha, l=0, c=0, i=0;
		char operacao;
		
		scanf("%d\n %c", &linha, &operacao);
		
		for (l=0;l<12;l++) {
			for (c=0;c<12;c++) {
				scanf("%f", &M[l][c]);
			}	
		}
			
		switch (operacao) {
			case 'S':
				for (i=0;i<12;i++) {
					res += M[linha][i];
				}		
			break;
			
			case 'M':
				for (i=0;i<12;i++) {
					res += M[linha][i]/12;
				}
			break;
			
		}
		
		printf("%.1f", res);
		
		return 0;
	}
