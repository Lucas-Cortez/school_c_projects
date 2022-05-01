#include <stdio.h>

void insertSort (int *vetor, int N) {
    int aux, i, j;
    for (i = 1; i < N; i++) {
        aux = vetor[i];
        for (j = i-1; (j >= 0) && (aux < vetor[j]); j--)
            vetor[j+1] = vetor[j];
            vetor[j+1] = aux;
    }
}

int main () {
    int V[10]={7,4,6,3,1,9,2,8,0,5};
    int a;
    
    insertSort(V, 10);
    
    for (a=0; a<10; a++){
        printf("%i ",V[a]);
    }
}
