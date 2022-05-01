#include <stdio.h> 

	int calc (int v1, int *v2) {
		
		int quo;
		
		quo = v1 / *v2;
		*v2 = v1 % *v2;
		
		return quo;
	}

	int main () {
		
		int v1, v2;
		
		printf("Coloque dois numeros: ");
		scanf("%d %d", &v1, &v2);
		
		v1 = calc(v1, &v2);
		
		printf("Quociente: %d\nResto: %d", v1, v2);
		
		return 0;
	}
