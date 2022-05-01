#include <stdio.h>
	
	  int main () {
	  	
	  		int i;
	  		float notas[5], media=0;
	  	
	  		for (i=0; i<5; i++) {
	  			scanf("%f", &notas[i]);
	  			media += notas[i];
			}
	  		
	  		printf("Media: %.2f\n", media/5);
	  		
	  	return 0;
	  }
      
	
