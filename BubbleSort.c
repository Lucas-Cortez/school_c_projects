#include <stdio.h>

void bubbleSort2 (int *vetor, int N) {
    int i, j, aux, troca = 1;
    for (i = 0; (i < N-1) && troca; i++) {
        troca = 0;
        for (j = 0; j < N-i-1; j++) {
            if (vetor[j] > vetor[j+1]) {
                aux = vetor[j];
                vetor[j] = vetor[j+1];
                vetor[j+1] = aux;
                troca = 1;
            }
        }
    }
}

int main () {
    int V[10]={7,4,6,3,1,9,2,8,0,5};
    int a;
    bubbleSort2(V, 10);
    
    for (a=0; a<10; a++){
        printf("%i ",V[a]);
    }
    getch();
}
