#include <stdio.h>
#include <math.h>

int main() {
	
	float r, area;
	
	printf("Coloque o raio do circulo para o calculo da area: ");
	scanf("%f/n", &r);
	
	area = 3.14159 * pow(r, 2);
	
	printf("A = %.4f\n", area);
	
	return (0);
}
