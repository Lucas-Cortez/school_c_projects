#include <stdio.h>

    void peso_ideal (float *peso, char sex) {
        switch (sex)
        {
        case 109:
            *peso = 72.7 * *peso - 58;
            break;

        case 102:
            *peso = 62.1 * *peso - 44.7;
            break;
        
        default:
            break;
        }
    }

    int main () {

        float alt;
        char sexo;
        
        printf("Digite sua altura: ");
        scanf("%f", &alt);
        printf("Digite seu sexo: ");
        scanf("%s", &sexo);

        peso_ideal(&alt, sexo);

        printf("Seu peso ideal eh %.2f\n", alt);


        return 0;
    }
