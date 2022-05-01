#include <stdio.h> 

	int main () {
		
		int a1, a2, a3, soma, soma1, soma2, soma3;
		
		scanf("%d", &a1);
		scanf("%d", &a2);
		scanf("%d", &a3);
		
		soma1 = 2*((2*a3)+a2);
		soma2 = 2*(a1+a3);
		soma3 = 2*((2*a1)+a2);
				
		soma = soma1;
		
		if (soma>soma2)
			soma = soma2;
			else if (soma>soma3)
			soma = soma3;
			
		printf("%d", soma);
		
		
		
		return 0;
	}
