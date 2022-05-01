#include <stdio.h>
#include <stdlib.h>

void quick_sort(int *a, int left, int right) {
    int i, j, x, y;
     
    i = left;
    j = right;
    x = a[(left + right) / 2];
     
    while(i <= j) {
        while(a[i] < x && i < right) {
            i++;
        }
        while(a[j] > x && j > left) {
            j--;
        }
        if(i <= j) {
            y = a[i];
            a[i] = a[j];
            a[j] = y;
            i++;
            j--;
        }
    }
     
    if(j > left) {
        quick_sort(a, left, j);
    }
    if(i < right) {
        quick_sort(a, i, right);
    }
}

int main () {

    int N, i, par=0, impar=0;

    scanf("%d", &N);
    
    int arr1[N];

    for(i=0;i<N;i++) {
        scanf("%d", &arr1[i]);
        if(arr1[i]%2 == 0)
            par++;
        else 
            impar++;
    }

    int arrPar[par], arrImpar[impar];
    par = -1;
    impar = -1;

    for(i=0;i<N;i++) {
        if(arr1[i]%2 == 0) {
            par++;
            arrPar[par] = arr1[i];
        } else {
            impar++;
            arrImpar[impar] = arr1[i];
        }
            
    }

    quick_sort(arrPar, 0, par);
    quick_sort(arrImpar, 0, impar);

    i=0;
    int pa=0;

    while(i <= par) {
        arr1[i] = arrPar[pa];
        pa++;
        i++;
    }

    while(i < N) {
        arr1[i] = arrImpar[impar];
        impar--;
        i++;
    }
    
    system("cls");

    for(i=0;i<N;i++) {
        printf("%d\n", arr1[i]);
    }
    
    system("pause");

	return 0;
}
