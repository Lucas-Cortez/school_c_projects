#include <stdio.h>

int main() {
	
	int cp1, cp2, p1, p2;
	float v1, v2, total;
	
	scanf("%d %d %f", &cp1, &p1, &v1);
	scanf("%d %d %f", &cp2, &p2, &v2);
	
	total = (p1 * v1) + (p2 * v2);
	
	printf("VALOR A PAGAR: R$%.2f\n", total);
	
	return 0;
	}
