#include <stdio.h>
#include <stdlib.h>

struct dado_cidade {
    char cidade[20];
    float taxa_2009;
    float taxa_2015;
    float indice_percent;
};

void quicksort(struct dado_cidade *a, float first, float last){
    int pivot, j, i;
    struct dado_cidade temp;

    if(first<last) {
         pivot=first;
         i=first;
         j=last;


         while(i<j){
             while(a[i].taxa_2015<=a[pivot].taxa_2015&&i<last)
                 i++;
             while(a[j].taxa_2015>a[pivot].taxa_2015)
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

int main () {

    FILE *dados;
    dados = fopen("dados_tabela.txt", "r");

    int i, j, vet[72][2];
    struct dado_cidade cidades[27];

    for (i = 0; i < 27; i++) {
        fscanf(dados, "\"%[^\"]\" %f %f %f", &cidades[i].cidade, &cidades[i].taxa_2009, &cidades[i].taxa_2015); 
        cidades[i].indice_percent = cidades[i].taxa_2015 - cidades[i].taxa_2009;
    }

    fclose(dados);

    printf("TABELA DESORGANIZADA:\n\n");
    printf("%*s \t %8s \t %8s \t %8s\n", -20, "ESTADOS", "TAXA 2009", "TAXA 2015", "INDICE");
    for (i=0; i<27; i++) {
        printf("%*s \t %8.2f \t %8.2f \t %8.2f\n", -20, cidades[i].cidade, cidades[i].taxa_2009, cidades[i].taxa_2015, cidades[i].indice_percent);
    }
    printf("\n\n");

    quicksort(cidades, 0, 26);
    
    printf("TABELA ORGANIZADA:\n\n");
    printf("%*s \t %8s \t %8s \t %8s\n", -20, "ESTADOS", "TAXA 2009", "TAXA 2015", "INDICE");
    for (i=0; i<27; i++) {
        printf("%*s \t %8.2f \t %8.2f \t %8.2f\n", -20, cidades[i].cidade, cidades[i].taxa_2009, cidades[i].taxa_2015, cidades[i].indice_percent);
    }
    
    printf("\n");
    
    system("pause");
    return 0;
}
