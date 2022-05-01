//19909037		1103	Alarme Despertador	Accepted	C	0.000	30/09/2020 22:36:37
#include <stdio.h>

	int calcmin (int h1, int min1, int h2, int min2) {
		
		int tot;	
		
		if (h2 < h1) 
			tot = (1440 - (h1*60 + min1)) + (h2*60 + min2);
		else if (h2 > h1) 
				tot = (60*h2 + min2) - (60*h1 + min1);		
			else if ((h2 == h1) && (min1 < min2))
					tot = min2 - min1;
				else if ((h2 == h1) && (min1 > min2)) 
						tot = 1440 - (min1 - min2);
	
		return (tot);
	}
	
	int main () {
		
		int min, h1, min1, h2, min2;
		
		scanf("%d %d %d %d", &h1, &min1, &h2, &min2);
		
		while (h1 || min1 || h2 || min2) {
			min = calcmin (h1, min1, h2, min2);
			
			printf("%d\n", min);
			
			scanf("%d %d %d %d", &h1, &min1, &h2, &min2);
		}
			
		return 0;
	}
