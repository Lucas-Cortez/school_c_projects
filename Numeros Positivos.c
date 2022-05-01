//19328578		1060	Números Positivos	Accepted	C	0.000	25/08/2020 22:25:56
#include <stdio.h>

	int main () {
		
		int qntd = 0, cont;
		float n;
		
		for (cont=0; cont<=5; cont++) {
			scanf("%f", &n);
			
			if (n>0) {
				qntd = qntd + 1;
			}
		}
		
		printf("%d valores positivos\n", qntd);
			
		return 0;
	}
