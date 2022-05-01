//19421410		1154	Idades	Accepted	C	0.000	01/09/2020 23:06:55

#include <stdio.h>

	int main () {
		
		int id, soma=0, div=0;	
		
		scanf("%d", &id);
		
		while (id > 0) {
			soma = soma + id;
			div++;
			
			scanf("%id", &id);
		}
		
		printf("%.2f\n", (float)soma/div);
		
		return 0;
	}
