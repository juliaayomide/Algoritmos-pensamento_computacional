#include <stdio.h>

int main (){
	float saque, saldo;
	
		printf("Insira seu saldo atual:\n");
		scanf("%f",&saldo);
		
	while (saldo > 0) {
		printf("Insira o valor do saque:\n");
		scanf("%f",&saque);
		saldo = saldo - saque;
	
		printf("Voce possui um saldo atual de %f\n", saldo);
	}
	
	printf("Conta zerada");
	
	return 0;
}
