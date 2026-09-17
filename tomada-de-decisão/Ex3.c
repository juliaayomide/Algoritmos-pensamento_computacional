#include <stdio.h>

int main () {
	
	int num1, num2;
	
	printf("Esse programa verifica se os dois numeros inseridos pelo usuario sao iguais\n");
	printf("Insira o primeiro numero:\n");
	scanf("%d",&num1);
	
	printf("Insira o segundo numero:\n");
	scanf("%d",&num2);
	
	if (num1 == num2) {
	printf("O numero e igual!");
	} else {
		printf("O numero e diferente!");
	};
	return 0;
}
