#include <stdio.h>

	int main () {
		
		int x, y, cont;
		
		scanf("%d", &x);
		
		while (x != 0) {
			
			y=0;
			
			if (x%2 != 0) {
				x++;
			}
			
			for (cont=0; cont<5; cont++) {
				y = y + x;
				x = x + 2;
			}
			
			printf("%d\n", y);
			scanf("%d", &x);
		}
		
		return 0;
	}
