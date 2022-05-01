#include <stdio.h>

void selectSort (int *vetor, int N) {
	
    int menor, aux, i, j;
    
    for (i = 0; i < N-1; i++) {
        menor = i;
        for (j = i+1; j < N; j++) {
            if (vetor[j] < vetor[menor])
                menor = j;
		}
		
        if (menor != i) {
	        aux = vetor[i];
	        vetor[i] = vetor [menor];
	        vetor[menor] = aux;
        }
    }
}



int main () {
    int V[10]={7,4,6,3,1,9,2,8,0,5};
    int a;
    
    selectSort(V, 10);
    
    for (a=0; a<10; a++){
        printf("%i ",V[a]);
    }
}
