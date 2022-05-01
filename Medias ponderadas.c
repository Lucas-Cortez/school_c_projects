//19327642		1079	Médias Ponderadas	Accepted	C	0.000	25/08/2020 21:06:41
#include <stdio.h>

	int main () {
		
		int n, cont;
		float med, x, y, z;
		
		scanf("%d", &n);
		
		for (cont=1; cont<=n; cont++) {
			scanf("%f %f %f", &x, &y, &z);
			
			med = (2*x+3*y+5*z)/10;
			
			printf("%.1f\n", med);
		}
		
		return 0;
	}
