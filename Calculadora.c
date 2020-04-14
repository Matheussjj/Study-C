#include <stdio.h>
#include <ctype.h>

/*Calculadora, soma, subtraçao, vezes, divisao, bit shift rigth and left
Os calculos bitwise mostra o numero em Hexadecimal
And, Or, Xor, Nand, Nor, Xnor
Factorial and Buzz para multiplos de 7 e numeros que terminam com 7*/

int mostrarMenu(){
	//Menu para rodar a calculadora
	puts("+-Simple Math -----------------------+");
	puts("|  + <a> <b> - compute x + y         |");
	puts("|  - <a> <b> - compute x - y         |");
	puts("|  * <a> <b> - compute x * y         |");
	puts("|  / <a> <b> - compute x / y         |");
	puts("|  % <a> <b> - compute x % y         |");
	puts("+-Bitwise ---------------------------+");
	puts("|  l <x> <n> - n-bit shift left x    |");
	puts("|  r <x> <n> - n-bit shift right x   |");
	puts("|  a <x> <y> - compute x and y       |");
	puts("|  o <x> <y> - compute x or y        |");
	puts("|  x <x> <y> - compute x xor y       |");
	puts("|  A <x> <y> - compute x nand y      |");	
	puts("|  O <x> <y> - compute x nor y       |");	
	puts("|  X <x> <y> - compute x xnor y      |");
	puts("+-Advanced --------------------------+");
	puts("|  ! <n> - compute factorial of n    |");
	puts("|  b <n> - plays buzz up to n        |");
	puts("+-Interface -------------------------+");
	puts("|  h - print this menu               |");
	puts("|  q - end program                   |");
	puts("+------------------------------------+");
	return 0;
}

int soma(){
	//Funcao para soma
	int n1,n2;
	printf("Entre com 2 numeros: \n");
	scanf("%d %d",&n1,&n2);
	printf("Resultado = %d\n",n1+n2);
	printf("Selecione um novo calculo: ");
	return 0;
}

int subtracao(){
	//Funcao para subtração
	int n1,n2;
	printf("Entre com 2 numeros: \n");
	scanf("%d %d",&n1,&n2);
	printf("Resultado = %d\n",n1-n2);
	printf("Selecione um novo calculo: ");
	return 0;
}

int multiplicacao(){
	//Funcao para multiplicação
	int n1,n2;
	printf("Entre com 2 numeros: \n");
	scanf("%d %d",&n1,&n2);
	printf("Resultado = %d\n",n1*n2);
	printf("Selecione um novo calculo: ");
	return 0;
}

void divisao(){
	//Função para divisão, nao divisivel por zero
	int n1,n2;
	printf("Entre com 2 numeros: \n");
	scanf("%d",&n1);
	scanf("%d",&n2);	
	if (n2 == 0){
		printf("Error division by zero\n");
	}else{
		printf("Resultado = %d\n",(n1/n2));
	}
	printf("Selecione um novo calculo: ");
}

int resto(){
	//Funcão para retornar o resto, nao divisivel por zero
	int n1,n2;
	printf("Entre com 2 numeros: \n");
	scanf("%d %d",&n1,&n2);
	if (n2 == 0){
		printf("Error division by zero\n");
	}
	else{
		printf("Resultado = %d\n",n1%n2);
	}
	printf("Selecione um novo calculo: ");
	return 0;
}

int shiftLeft(){
	//Funcao para dar um shift a um bit esquerdo
	unsigned int x,n;
	printf("Entre com 2 numeros positivos: \n");
	scanf("%x %u",&x,&n);
	printf("Resultado = 0X%08X\n",x<<n);
	printf("Selecione um novo calculo: ");
	return 0;
}

int shiftRight(){
	//Funcao para dar um shift a um bit direito
	unsigned int x,n;
	printf("Entre com 2 numeros positivos: \n");
	scanf("%x %u",&x,&n);
	printf("Resultado = 0X%08X\n",x>>n);
	printf("Selecione um novo calculo: ");
	return 0;
}

int and(){
	//Funcao para utilizar AND
	unsigned int x,y;
	printf("Entre com 2 numeros positivos: \n");
	scanf("%x %x",&x,&y);
	printf("Resultado = 0X%08X\n",x&y);
	printf("Selecione um novo calculo: ");
	return 0;
}

int or(){
	//Funcao para utilizar OR
	unsigned int x,y;
	printf("Entre com 2 numeros positivos: \n");
	scanf("%x %x",&x,&y);
	printf("Resultado = 0X%08X\n",x|y);
	printf("Selecione um novo calculo: ");
	return 0;
}

int xor(){
	//Funcao para utilizar XOR
	unsigned int x,y;
	printf("Entre com 2 numeros positivos: \n");
	scanf("%x %x",&x,&y);
	printf("Resultado = 0X%08X\n",x^y);
	printf("Selecione um novo calculo: ");
	return 0;
}

int nand(){
	//Funcao para utilizar NAND
	unsigned int x,y;
	printf("Entre com 2 numeros positivos: \n");
	scanf("%x %x",&x,&y);
	printf("Resultado = 0X%08X\n",~(x&y));
	printf("Selecione um novo calculo: ");
	return 0;
}

int nor(){
	//Funcao para utilizar NOR
	unsigned int x,y;
	printf("Entre com 2 numeros positivos: \n");
	scanf("%x %x",&x,&y);
	printf("Resultado = 0X%08X\n",~(x|y));
	printf("Selecione um novo calculo: ");
	return 0;
}

int xnor(){
	//Funcao para utilizar XNOR
	unsigned int x,y;
	printf("Entre com 2 numeros positivos: \n");
	scanf("%x %x",&x,&y);
	printf("Resultado = 0X%08X\n",~(x^y));
	printf("Selecione um novo calculo: ");
	return 0;
}

int fatorial(){
	//Funcao para fazer o fatorial
	unsigned int n,i;
	int fatorial=1;//Fatorial de 0 é 1
	printf("Entre com um numero positivo: \n");
	scanf("%u",&n);
	for (i=1; i <= n;i++){
		fatorial *= i;//Pega 1 e fazer multiplicacao com todos numeros de n
	}
	printf("Resultado = %d\n",fatorial);
	printf("Selecione um novo calculo: ");
	return 0;
}

int jogoBuzz(){
	unsigned int n,i;
	printf("Entre com um numero positivo: \n");
	scanf("%u",&n);
	printf("Sequência:\n");
	for (i=1;i<=n;i++){
		if (i%7==0||i%10==7){//multiplos de 7 e terminados em 7
			printf("buzz\n");
		}else{
			printf("%d\n",i);
		}
	}
	printf("Selecione um novo calculo: ");
	return 0;
}

int main(){
	char opcao,ciclodowhile=1;
	mostrarMenu();
	do{
		scanf("%c",&opcao);
		switch (opcao)
		{
		case 'q':
			ciclodowhile=0;
			break;
	
		case 'h':
			mostrarMenu();
			break;

		case '+':
			soma();
			break;

		case '-':
			subtracao();
			break;

		case '*':
			multiplicacao();
			break;

		case '/':
			divisao();
			break;

		case '%':
			resto();
			break;

		case 'l':
			shiftLeft();
			break;

		case 'r':
			shiftRight();
			break;

		case 'a':
			and();
			break;

		case 'o':
			or();
			break;

		case 'x':
			xor();
			break;

		case 'A':
			nand();
			break;

		case 'O':
			nor();
			break;

		case 'X':
			xnor();
			break;

		case '!':
			fatorial();
			break;

		case 'b':
			jogoBuzz();
			break;

		case '\n':break;

		default:
			puts("Unknown option");
			break;
		}
	}while (ciclodowhile!=0);
	puts("Bye");
	return 0;
}