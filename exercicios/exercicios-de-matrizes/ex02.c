#include <stdio.h>
#include <locale.h>

void exibirLinhaEscolhida (int matriz[4][4], int escolha) {
	
	int j;
	
	for (j = 0; j < 4; j++) {
		
		printf(">>>\tmat[%d][%d]: %d\n", escolha, j, matriz[escolha][j]);
		
	}
	
}

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	int mat[4][4];
	
	int i, j, k = 1;
	for (i = 0; i < 4; i++) {
		
		for (j = 0; j < 4; j++) {
			
			mat[i][j] = k;
			k++;
		}
		
	}
	
	int selectLine;
	
	printf("De qual linha da matriz você deseja inspecionar os valores?(De 0 à 3)");
	printf("\nEscolha: ");
	
	do {
		
		scanf("%d", &selectLine);
		
		if (selectLine < 0 || selectLine > 3) {
			
			printf("Opção Inválida...\nPor favor, escolha novamente: ");
			
		}
		
	} while (selectLine < 0 || selectLine > 3);
	
	exibirLinhaEscolhida(mat, selectLine);
	
	return 0;
}
