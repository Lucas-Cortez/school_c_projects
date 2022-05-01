// 19232239		1035	Teste de Seleção 1	Presentation error	C	0.000	18/08/2020 21:35:50

#include <stdio.h>

int main () {

    int a, b;

    scanf("%d %d", &a, &b);

    if ((a%b == 0) || (b%a == 0))
    {
        printf("Sao multiplos");
    } else {
        printf("Nao sao multiplos");
    }
    
    return 0;
}
