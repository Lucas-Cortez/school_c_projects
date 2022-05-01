#include <stdio.h>
#include <stdlib.h>

struct aluno {
    int ra;
    float nota_a1;
    float nota_a2
};

int main () {

    FILE *dados;
    dados = fopen("A05naoOrdenado.txt", "r");

    int i, ra;
    struct aluno alunos[75];

    for (i = 0; i < 75; i++) {
        fscanf(dados, "%d %f %f", &alunos[i].ra, &alunos[i].nota_a1, &alunos[i].nota_a2); 
    }
    
    fclose(dados);

    printf("Digite o RA que deseja saber a nota:\n");
    scanf("%d", &ra);
    printf("\n");

    for (i = 0; i < 75; i++) {
        if (alunos[i].ra == ra) {
            printf("NOTA A1: %.1f\nNOTA A2: %.1f\nMEDIA: %.2f\n", alunos[i].nota_a1, alunos[i].nota_a2, (alunos[i].nota_a1 + alunos[i].nota_a2) / 2);
            break;
        }
    }

    system("pause");

    return 0;
}

