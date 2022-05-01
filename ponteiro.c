#include <stdio.h>

	int main (void) {
		int i; int *p;
		
		scanf("%d", &i);
		
		p = &i;
		
		printf ("Para onde 'p' aponta: %d\n", *p);
		printf ("Ponteiro 'p': %p\n", p);
		printf ("Endereço de memora de 'p': %p\n", &p);
		
		return 0;
	}

