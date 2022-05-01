#include <stdio.h>

	void mudar(int *input, int *output) {
		
		int i, j;
		
		for (i=0;i<10;i++) {
			output[9-i] = input[i];
		}
					
	}

	int main () {
		
		int i, input[10], output[10];
		
		for (i=0;i<10;i++) {
			scanf("%d", &input[i]);
		}
	
		mudar(input, output);
		
		for (i=0;i<10;i++)
			printf("%d ", output[i]);
		
		return 0;
	}
