#include <stdio.h>

int main () { 

	int cont, num;

	printf("Entre com um numero: ");

 	scanf("%d", &num);

	for (cont=1; cont<=10; cont+=1) {
		printf ("\n%d X %d = %d", cont, num, num*cont);
	}
	
	return 0;
}
