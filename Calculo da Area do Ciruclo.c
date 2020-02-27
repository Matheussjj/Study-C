#include <stdio.h>
//Calcular area de um circulo com o raio
int main(void)
{
	float raio, area;
	const float pi = 3.141592;
	printf("Entre com o raio do circulo: ");
	scanf("%f",&raio);
	area = pi * (raio*raio);
	printf("\nA area do circulo = %0.4f\n\n",area);
	return 0;
}