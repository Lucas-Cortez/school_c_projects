#include <stdio.h>
#include <math.h>

	typedef struct _p {
		float x, y;
	} ponto;
	
	float caldist (float x1, float y1, float x2, float y2) {
		
		float resultado;
		
		resultado = sqrt(pow(x2 - x1, 2) + (pow(y2 - y1, 2)));
		return (resultado);
	}

	int main () {
		
		float distancia;
		ponto p1, p2;
		
		printf("Coloque as coordenadas X e Y do primeiro ponto: ");
		scanf("%f %f", &p1.x, &p1.y);
		printf("Coloque as coordenadas X e Y do segundo ponto: ");
		scanf("%f %f", &p2.x, &p2.y);
		
		distancia = caldist(p1.x, p1.y, p2.x, p2.y);
		
		printf("A distancia entre os dois pontos eh %.2f", distancia);
		
		return 0;
	}
