#include <stdio.h>
//Pegar 4 notas e fazer a media
int main(void)
{
	int cont;
	float notas=0,media=0;
	for (cont = 1; cont <= 4; cont++){
		printf("Entre com a %iª nota: ",cont);
		scanf("%f",&notas);
		media += notas;
	}
	printf("\nMedia = %.2f\n\n",media/4);
	return 0;
}
