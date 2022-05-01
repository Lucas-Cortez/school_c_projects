#include <stdio.h>

	int main () {
		
		int n, cont, l, r, d;
		
		scanf("%d",&n);
		
		for (cont=1; cont<=n; cont++) {
			
			scanf("%d %d %d", &l, &r, &d);
			
			if ((r>50) && (l<r) && (r>d)) {
				printf("S\n");
			} else {
				printf("N\n");
			}
		}
		
		return 0;
	}
