#include <stdio.h>

	int main () {
		
		char letra;
		
		printf("MENU\n");
		printf("A.opcao 1\n");
		printf("B.opcao 2\n");
		printf("C.opcao 3\n");
		printf("D.opcao 4\n");
		printf("E.opcao 5\n");
		printf("Escolha uma opcao: ");
		
		letra = getchar();
		
		switch (letra) {
			case 65:
				printf("Voce escolheu a opcao 1\n");
				break;
			case 66:
				printf("Voce escolheu a opcao 2\n");
				break;
			case 67:
				printf("Voce escolheu a opcao 3\n");
				break;
			case 68:
				printf("Voce escolheu a opcao 4\n");
				break;
			case 69:
				printf("Voce escolheu a opcao 5\n");
				break;
			default:
				printf("Voce nao escolheu nenhuma das opcoes.");
		}
	
	return 0;
	}	
