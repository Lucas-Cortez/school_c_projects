#include <stdio.h>
#include <stdlib.h>

int bubble_sort (int v[], int n) {
    int k, j, aux, tr=0;

    for (k = 0; k < n - 1; k++) {
        for (j = 0; j < n - k - 1; j++) {
            if (v[j] > v[j + 1]) {
                aux = v[j];
                v[j] = v[j + 1];
                v[j + 1] = aux;
                tr++;
            }
        }
    }

    return tr;
}

int main(){

    int n=0,l=0,i=0,j=0,testes=0;

    scanf("%d",&n);

    for(i=0;i<n;i++) {

        scanf("%d",&l);
        int num[l];

        for(j=0;j<l;j++){
            scanf("%d",&num[j]);
        }

        testes = bubble_sort(num,l);
        printf("Optimal train swapping takes %d swaps.\n", testes);
    }
    return 0;
}
