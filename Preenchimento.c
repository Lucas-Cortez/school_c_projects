#include <stdio.h>
	
	int main () {
		
		int cont=0, i=0, im=0, pa=0, n, par[5], impar[5];
		
		
		for (i=0;i<15;i++) {
			scanf("%d", &n);
			
			if (n%2) {
				impar[im]=n;
				im++;
			} else {
				par[pa]=n;
				pa++;
			}
			
			if (im==5) {
				for (cont=0;cont<5;cont++) {
					printf("impar[%d] = %d\n", cont, impar[cont]);
				}
				im=0;
				cont=0;
			} else if (pa==5) {
					for (cont=0;cont<5;cont++) {
						printf("par[%d] = %d\n", cont, par[cont]);
					}
					pa=0;
					cont=0;
				}
			
		}
		
		for (i=0; i<im; i++) {
			printf("impar[%d] = %d\n", i, impar[i]);
		
		}
		
		i=0;
		
		for (i=0; i<pa; i++) {
			printf("par[%d] = %d\n", i, par[i]);
		}
			
		return 0;
	}
