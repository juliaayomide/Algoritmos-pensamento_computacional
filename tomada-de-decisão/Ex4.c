#include <stdio.h>

int main(){
	int diaD;
	
	printf("Informe um numero para que retorne o dia da semana:\n");

	scanf("%d",&diaD);
	
	switch (diaD) {
		case 1:
		printf("Domingo");
		break;
		case 2:
		printf("Segunda-feira");
		break;
		case 3:
		printf("terca-Feira");
		break;
		case 4: 
		printf("Quarta-feira");
		break;
		case 5: 
		printf("Quinta-feira");
		break;
	    case 6: 
		printf("Sexta-feira");
		break;
		case 7: 
		printf("Sabado");
		break;
		default:
		printf("Opcao invalida, insira outra!");
		
	
		
	}
	
	return 0;
}
