#include <stdio.h>

	int main () {
		
		int ind=0, i, N, medidas[100];
		
		scanf("%d", &N);
		
		for (i=0;i<N;i++) {
			scanf("%d", &medidas[i]);
			
			if (i) {
				if(medidas[i]<medidas[i-1] && ind==0) {
					ind = i;
					ind++;
				}	
			} else
				continue;
		}
		
		printf("%d\n", ind);
		
		return 0; 
	}
