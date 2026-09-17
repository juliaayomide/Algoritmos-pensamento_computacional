include <stdio.h>

int main(){
	int opcao;
	
	printf("Informe a opcao que deseja para obter o valor do quilo de cada fruta \n");
	printf("Opcao 1: Banana | Opcao 2: Maca | Opcao 3: Laranja | Opcao 4: Mamao \n");
	scanf("%d",&opcao);
	
	switch (opcao) {
		case 1:
		printf("O quilo da Banana esta RS5.00 (5 reais)");
		break;
		case 2:
			printf("O quilo da Maca esta RS6.00 (6 reais)");
		break;
		case 3:
		printf("O quilo da Laranja esta RS4.00 (4 reais)");
		break;
		case 4: 
		printf("O quilo do Mamao esta RS5.50 (5 reais e cinquenta centavos)");
		break;
		default:
		printf("Opcao invalida, insira outra!");
		
	}
	
	return 0;
}
