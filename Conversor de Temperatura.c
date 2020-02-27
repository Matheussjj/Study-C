#include <stdio.h>
//Passar uma temperatura em Fahrenheit para Celsius ou Celsius para Farenheit
int main(void)
{
	int opcao;
	float fahrenheit, celsius;
	do{
		printf("Escolha a opção:\n\n1 - Fahrenheit para Celsius\n2 - Celsius para Fahrenheit\n\n");
		scanf("%i",&opcao);
		if (opcao == 1){
			printf("\nEntre com a temperatura em Fahrenheit: ");
			scanf("%f",&fahrenheit);
			celsius = 5.0 * (fahrenheit - 32.0)/9.0;
			printf("\nA temperatura em Celsius = %0.2f\n\n",celsius);

		} else if (opcao == 2){
			printf("\nEntre com a temperatura em Celsius: ");
			scanf("%f",&celsius);
			fahrenheit = celsius * 1.8 + 32.0;
			printf("\nA temperatura em Fahrenheit = %0.2f\n\n",fahrenheit);

		} else{
			printf("\nOpção invalidade tente novamente\n\n");
			opcao = 0;
		}

	}while (opcao == 0);
	return 0;
}
