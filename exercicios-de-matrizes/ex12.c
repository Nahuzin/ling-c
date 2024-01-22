#include <stdio.h>
#include <locale.h>

void ExibirAcimDiagSec (int matriz[5][5]) {

	printf("\n\nElementos que estão acima da diagonal principal da matriz:\n\n");
	
	int i, j;
	for (i = 0; i < 4; i++) {
		
		j = 3;
		
		while (j >= 0) {
			
			printf(">>> mat[%d][%d]: %d\n", i, j, matriz[i][j]);
			
			j--;
			
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
			
			printf(">>>\tmat[%d][%d]: %d\n", i, j, mat[i][j]);
			
			k++;
			
		}
		
	}
	
	ExibirAcimDiagSec(mat);
	
	printf(">=>=>\tPressione em alguma tecla para finalizar o programa: ");
	getch();
	
	return 0;
}
