#include <stdio.h>
#include <locale.h>

void ExibirAcimDiagPrinc(int matriz[5][5]) {
	
	printf("\nElementos acima da diagonal principal da matriz:\n\n");
	
	int i, j;
	for(i = 0; i < 4; i++) {
		
		for (j = i + 1; j < 5; j++) {
			
			printf(">>>\tmat[%d][%d]: %d\n", i, j, matriz[i][j]);
			
		}
		
	}
	
}

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	int mat[5][5];
	
	printf("Valores da matriz:\n\n");
	
	int i, j, k = 1;
	for (i = 0; i < 5; i++) {
		
		for (j = 0; j < 5; j++) {
			
			mat[i][j] = k;
			
			if (mat[i][j] <= 10) {
				
				printf("%d    ", mat[i][j]);
				
			} else {
				
				printf("%d   ", mat[i][j]);
				
			}
			
			k++;
			
		}
		
		printf("\n");
		
	}
	
	ExibirAcimDiagPrinc(mat);
	
	printf("\n>=>=>\tPessione em alguma tecla para finalizar o programa: ");
	getch();
	
	return 0;
}
