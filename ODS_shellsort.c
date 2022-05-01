#include <stdio.h>
#include <stdlib.h>

struct dado_cidade {
    char cidade[20];
    float taxa_2009;
    float taxa_2015;
    float indice_percent;
};

void shellsort(struct dado_cidade *a, int size) {
    int i , j;
    struct dado_cidade value;
    int gap = 1;
    
    do {
        gap = 3*gap+1;
    } while(gap < size);
    
    do {
        gap /= 3;

        for(i = gap; i < size; i++) {
            value = a[i];
            j = i - gap;
                
            while (j >= 0 && value.taxa_2015 > a[j].taxa_2015) {
                a[j + gap] = a[j];
                j -= gap;
            }

            a[j + gap] = value;
        }

    } while(gap > 1);
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

    // printf("TABELA DESORGANIZADA:\n\n");
    // printf("%*s \t %8s \t %8s \t %8s\n", -20, "ESTADOS", "TAXA 2009", "TAXA 2015", "INDICE");
    // for (i=0; i<27; i++) {
    //     printf("%*s \t %8.2f \t %8.2f \t %8.2f\n", -20, cidades[i].cidade, cidades[i].taxa_2009, cidades[i].taxa_2015, cidades[i].indice_percent);
    // }
    // printf("\n\n");

    shellsort(cidades, 27);
    
    printf("TABELA ORGANIZADA:\n\n");
    printf("%*s \t %8s \t %8s \t %8s\n", -20, "ESTADOS", "TAXA 2009", "TAXA 2015", "INDICE");
    for (i=0; i<27; i++) {
        printf("%*s \t %8.2f \t %8.2f \t %8.2f\n", -20, cidades[i].cidade, cidades[i].taxa_2009, cidades[i].taxa_2015, cidades[i].indice_percent);
    }
    
    printf("\n");
    
    system("pause");
    return 0;
}
