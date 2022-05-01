#include <stdio.h>
#include <stdlib.h>
#include "operac.c"

int main(){
	
	int ano = 0;
	float resultado = 0;
	
	// Faz a leitura do arquivo .txt
	int i;
	dados Pibs[50];
	
	FILE *dados;
    dados = fopen("economia.txt", "r");
	
    for (i = 0; i < 50; i++) {
        fscanf(dados,"%d %f", &Pibs[i].ano, &Pibs[i].pib);
    }
	//----------------------------------------
	
	//chama quicksort
	quicksort(Pibs, 0, 49);

	printf("Anos que o PIB teve os MENORES crescimentos:\n");
	for (i = 0; i < 10; i++){
		printf("%d %.2f\n", Pibs[i].ano, Pibs[i].pib);
	}
	
	printf("\n");
	
	printf("Anos que o PIB teve os MAIORES crescimentos:\n");
	for (i = 49; i > 39; i--){
		printf("%d %.2f\n", Pibs[i].ano, Pibs[i].pib);
	}
	
	printf("\n");
	
	//chamando quicksortdois	
	quicksortdois(Pibs, 0, 49);
	

	do {
		printf("O PIB de qual ano voce deseja saber? (1971 a 2020)\n");
	    scanf("%d", &ano);
	    
	    resultado = buscaBinaria(Pibs, 0, 49, ano);
	    
	    if(resultado == -1)
	        printf("Valor INVALIDO\n");
	    else{
	        printf("PIB DE %d = %.2f\n",ano, resultado);
	        break;
		}
	        
	} while (1);
	
	return 0;
}

