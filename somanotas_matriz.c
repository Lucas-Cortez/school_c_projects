#include <stdio.h>

	int main () {
		 
		int A[4][3], B[4][3], C[4][3];
		int i=0, j=0;
		
		for (i=0;i<4;i++) {
			for (j=0;j<3;j++) {
				printf("Elemento[%d][%d] da matriz 1: ", i+1, j+1);
				scanf("%d", &A[i][j]);
				C[i][j] = A[i][j];
			}
			j=0;
		}
		
		i=0;
		
		for (i=0;i<4;i++) {
			for (j=0;j<3;j++) {
				printf("Elemento[%d][%d] da matriz 2: ", i+1, j+1);
				scanf("%d", &B[i][j]);
				C[i][j] += B[i][j];
			}
			j=0;
		}
		
		i=0;			

		printf("Soma:\n");
		
		for (i=0;i<4;i++) {
			for (j=0;j<3;j++) {
				printf("%d\t ", C[i][j]);
			}
			printf("\n");
			j=0;
		}
		
		return 0;
	}
