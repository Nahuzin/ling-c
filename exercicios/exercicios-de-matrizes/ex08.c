#include <stdio.h>
#include <locale.h>

void ExibirDiagPrinc (int matriz[5][5]) {
	
	int i, j;
	printf("\n\nElementos da diagonal principal da matriz:\n\n");
	
	for (i = 0; i < 5; i++) {
		
		for (j = 0; j < 5; j++) {
			
			if (i == j) {
				
				printf("mat[%d][%d]: %d\n", i, j, matriz[i][j]);
				
			}
			
		}
		
	}
	
}

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	int mat[5][5];
	
	printf("Elementos da matriz:\n\n");
	
	int i, j, k = 1;
	for (i = 0; i < 5; i++) {
		
		for (j = 0; j < 5; j++) {
			
			mat[i][j] = k;
			
			printf("mat[%d][%d]: %d\n", i, j, mat[i][j]);
			
			k += 1;
			
		}
		
	}
	
	ExibirDiagPrinc(mat);
	
	getch();
	
	return 0;
}
