#include <stdio.h>
#include <string.h>

/*
Programa recebe duas datas, uma de nascimento e uma de dia atual
Mostra o Signo e a Idade
*/

int main(){
    int dia,mes,ano;
	int diaatual,mesatual,anoatual;
	int idade;
	char astro[15] = "";

	printf("Entre com o dia de nascimento: ");
	scanf("%d",&dia);
	printf("Entre com o mes de nascimento: ");
	scanf("%d",&mes);
	printf("Entre com o ano de nascimento: ");
	scanf("%d",&ano);

	printf("\nEntre com o dia atual: ");
	scanf("%d",&diaatual);
	printf("Entre com o mes atual: ");
	scanf("%d",&mesatual);
	printf("Entre com o ano atual: ");
	scanf("%d",&anoatual);

	if(ano<1919){
		printf("Invalid date of birth\n");
		return 0;
	}

	if((mes == 1 || mes == 3 || mes == 5 || mes == 7 ||  mes == 8 || mes == 10 || mes == 12) && dia > 31){
		printf("Invalid date of birth\n");
		return 0;
	} else if((mes == 4 || mes == 6 || mes == 9 || mes == 11) && dia > 30){
		printf("Invalid date of birth\n");
		return 0;
	} else if(mes == 2 && dia > 28){
		printf("Invalid date of birth\n");
		return 0;
	}

	if(anoatual>2020){
		printf("Invalid date\n");
		return 0;
	}

	if((mesatual == 1 || mesatual == 3 || mesatual == 5 || mesatual == 7 ||  mesatual == 8 || mesatual == 10 || mesatual == 12) && diaatual > 31){
		printf("Invalid date\n");
		return 0;
	}else if ((mesatual == 4 || mesatual == 6 || mesatual == 9 || mesatual == 11) && diaatual > 30){
		printf("Invalid date\n");
		return 0;
	}else if(mesatual == 2 && diaatual > 28){
		printf("Invalid date\n");
		return 0;
	}

	if(mes<=mesatual && dia<=diaatual){
		idade = anoatual-ano;
	}else{
		idade = (anoatual-ano)-1;
	}

	if (mes == 1){
		if(dia <= 19){
			strcpy(astro,"Capricorn");
		}else{
			strcpy(astro,"Aquarius");
		}

	}else if(mes == 2){
		if(dia <= 18){
			strcpy(astro,"Aquarius");
		}else{
			strcpy(astro,"Pisces");
		}

	}else if(mes == 3){
		if(dia <= 20){
			strcpy(astro,"Pisces");
		}else{
			strcpy(astro,"Aries");
		}
		
	}else if(mes == 4){
		if(dia <= 19){
			strcpy(astro,"Aries");
		}else{
			strcpy(astro,"Taurus");
		}
		
	}else if(mes == 5){
		if(dia <= 20){
			strcpy(astro,"Taurus");
		}else{
			strcpy(astro,"Gemini");
		}
		
	}else if(mes == 6){
		if(dia <= 20){
			strcpy(astro,"Gemini");
		}else{
			strcpy(astro,"Cancer");
		}
		
	}else if(mes == 7){
		if(dia <= 22){
			strcpy(astro,"Cancer");
		}else{
			strcpy(astro,"Leo");
		}
		
	}else if(mes == 8){
		if(dia <= 22){
			strcpy(astro,"Leo");
		}else{
			strcpy(astro,"Virgo");
		}
		
	}else if(mes == 9){
		if(dia <= 22){
			strcpy(astro,"Virgo");
		}else{
			strcpy(astro,"Libra");
		}
		
	}else if(mes == 10){
		if(dia <= 22){
			strcpy(astro,"Libra");
		}else{
			strcpy(astro,"Scorpio");
		}
		
	}else if(mes == 11){
		if(dia <= 21){
			strcpy(astro,"Scorpio");
		}else{
			strcpy(astro,"Sagittarius");
		}
		
	}else if(mes == 12){
		if(dia <= 21){
			strcpy(astro,"Sagittarius");
		}else{
			strcpy(astro,"Capricorn");
		}
		
	}

	printf("\n%d years old, %s\n",idade,astro);
    return 0;
}