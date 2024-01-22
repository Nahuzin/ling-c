#include <stdio.h>
#include <locale.h>

void ExibirAcimDiagPrinc(int matriz[5][5]) {

	printf("\n\nElementos abaixo da diagonal principal da matriz:\n\n");

	int i, j;
	for (i = 4; i >= 1; i--) {
		
		for (j = i - 1; j >= 0; j--) {
			
			printf(">>> mat[%d][%d]: %d\n", i, j, matriz[i][j]);
			
		}
		
	}

}

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	printf("Elementos que compõem a matriz:\n\n");
	
	int mat[5][5];
	
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
	
	printf("\n>=>=>\tClique em alguma tecla para finalizar o programa: ");
	getch();
	
	return 0;
}
