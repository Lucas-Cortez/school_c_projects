#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include "header.h"

void quicksort(dados *a, float first, float last){
    int pivot, j, i;
    dados temp;

    if(first<last) {
         pivot=first;
         i=first;
         j=last;


         while(i<j){
             while(a[i].pib<=a[pivot].pib&&i<last)
                 i++;
             while(a[j].pib>a[pivot].pib)
                 j--;
             if(i<j){
                 temp=a[i];
                  a[i]=a[j];
                  a[j]=temp;
             }
         }

         temp=a[pivot];
         a[pivot]=a[j];
         a[j]=temp;
         quicksort(a,first,j-1);
         quicksort(a,j+1,last);
    }
}

void quicksortdois(dados *a, int first, int last){
    int pivot, j, i;
    dados temp;

    if(first<last) {
         pivot=first;
         i=first;
         j=last;


         while(i<j){
             while(a[i].ano<=a[pivot].ano&&i<last)
                 i++;
             while(a[j].ano>a[pivot].ano)
                 j--;
             if(i<j){
                 temp=a[i];
                  a[i]=a[j];
                  a[j]=temp;
             }
         }

         temp=a[pivot];
         a[pivot]=a[j];
         a[j]=temp;
         quicksortdois(a,first,j-1);
         quicksortdois(a,j+1,last);
    }
}

float buscaBinaria(dados *vector, float inicio, float fim, float item){
    int i = (inicio + fim) / 2;

    if (inicio > fim)
        return -1;
    if (vector[i].ano == item)
        return vector[i].pib;
    if (vector[i].ano < item) 
        return buscaBinaria(vector, i + 1, fim, item);
    else   // vector[i] > item
        return buscaBinaria(vector, inicio, i - 1, item);
}

