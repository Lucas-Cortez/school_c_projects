//19327214		1143	Quadrado e ao Cubo	Accepted	C	0.000	25/08/2020 20:29:08
#include <stdio.h>

	int main() {
		
		int n, cont;
		
		scanf("%d", &n);
		
		for (cont=1; cont<=n; cont+=1) {
			printf("%d %d %d\n", cont, cont*cont, cont*cont*cont);
		}
		
		return 0;
	}
