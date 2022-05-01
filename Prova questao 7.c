#include <stdio.h>

	int main () {
		
		int comeco, fim;
		
		printf("Coloque o horario de inicio: ");
		scanf("%d", &comeco);
		
		printf("Coloque o horario de termino: ");
		scanf("%d", &fim);
		
		if (fim <= comeco) 
			printf("%d", (24-comeco)+fim);
		else
			printf("%d", fim-comeco);
		
		return 0;
	}
