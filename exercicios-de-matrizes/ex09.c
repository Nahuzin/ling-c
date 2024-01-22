#include <stdio.h>
#include <locale.h>

void ExibirDiagSec (int matriz[5][5]) {
	
	printf("\n\nElementos da diagonal secundária:\n\n");
	
	int i, j;
	for (i = 0; i < 5; i++) {
		
		for (j = 0; j < 5; j++) {
			
			if (i + j == 4) {
				
				printf(">>>\tmat[%d][%d]: %d\n", i, j, matriz[i][j]);
				
			}
			
		}
		
	}
	
}

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	int mat[5][5];
	
	int i, j, k = 1;
	for (i = 0; i < 5; i++) {
		
		for (j = 0; j < 5; j++) {
			
			mat[i][j] = k;
			
			printf("> mat[%d][%d]: %d\n", i, j, mat[i][j]);
			
			k++;
			
		}
		
	}
	
	ExibirDiagSec(mat);
	
	printf("\nClique em alguma tecla para finalizar o programa: ");
	getch();
	
	return 0;
}
