#include <stdio.h>
#include <locale.h>

int SelectChoice() {
	
	int choice1;
	
	printf("De qual coluna da matriz você deseja inspecionar os valores?(De 0 à 3)");
	printf("\nEscolha: ");
	
	do {
		
		scanf("%d", &choice1);
		
		if (choice1 < 0 || choice1 > 3) {
			
			printf("Opção Inválida...\nPor favor, escolha novamente: ");
			
		}
		
	} while (choice1 < 0 || choice1 > 3);
	
	
	return choice1;
}

void ExibirColunaEscolhida (int matriz[4][4]) {
	
	int i;
	
	int choice2 = SelectChoice();
	
	for (i = 0; i < 4; i++) {
		
		printf(">>>\tmat[%d][%d]: %d\n", i, choice2, matriz[i][choice2]);
		
	}
	
}

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	int mat[4][4];
	
	printf("Elementos da matriz:\n\n");
	
	int i, j, k = 3;
	for (i = 0; i < 4; i++) {
		
		for (j = 0; j < 4; j++) {
			
			mat[i][j] = k;
			printf("mat[%d][%d]: %d\n", i, j, mat[i][j]);
			
			k += 3;
			
			if (i == 3 && j == 3) {
				
				printf("\n=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n");
				
			}
			
		}
		
	}
	
	ExibirColunaEscolhida(mat);
	
	return 0;
}
