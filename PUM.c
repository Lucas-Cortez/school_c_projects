#include <stdio.h>

	int main () {
		
		int n, i;
		
		scanf("%d", &n);
		
		n *= 4;
		
		for (i=1; i<=n; i++) {
			if (i%4)
				printf("%d ",i);
			else
				printf("PUM\n");	
		}
		
		return 0;
	}
