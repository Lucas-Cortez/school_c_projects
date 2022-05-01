#include <stdio.h>

	int main () {
		
		char x1, x2, x3, x4, x5;
		
		printf("Digite cinco letras de A a Y separadas por espacos:\n");
		scanf("%c %c %c %c %c", &x1, &x2, &x3, &x4, &x5);
		
		if ((x1>89)||(x2>89)||(x3>89)||(x4>89)||(x5>89)) {
			printf("Somente letras entre A a Y!!");
		} else {
			printf("%c", x1+1);
			printf(", %c", x2+1);
			printf(", %c", x3+1);
			printf(", %c", x4+1);
			printf(", %c", x5+1);
		}
		
		return 0;
	}
