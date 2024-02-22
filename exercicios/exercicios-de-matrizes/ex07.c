#include <stdio.h>
#include <locale.h>

/*int FuncDeVerificacao (int matriz[4][4], int numeroVerificar) {
	
	int i, j;
	for (i = 0; i < 4; i++) {
		
		for (j = 0; j < 4; j++) {
			
			if (mat[i][j] == numeroVerificar)
			
		}
		
	}
	
}*/

void ExibirNumEsc (int matriz[4][4], int numeroEscolhido) {
	
	int i, j;
	for (i = 0; i < 4; i++) {
		
		for (j = 0; j < 4; j++) {
			
			if (matriz[i][j] == numeroEscolhido) {
				
				printf(">>>\tO número %d encontra-se na linha %d e na coluna %d da matriz!\n", numeroEscolhido, i, j);
				
			}
			
		}
		
	}
		
}

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	int mat[4][4];
	
	int i, j, k = 0;
	for (i = 0; i < 4; i++) {
		
		for (j = 0; j < 4; j++) {
			
			mat[i][j] = k;
			
			printf("> mat[%d][%d]: %d\n", i, j, mat[i][j]);
			
			k++;
			
		}
		
	}
	
	int verNum;
	
	printf("\n>=>=>\tDigite que número você deseja verificar se existe na matriz: ");
	scanf("%d", &verNum);
	
	ExibirNumEsc(mat, verNum);
	
	return 0;
}
