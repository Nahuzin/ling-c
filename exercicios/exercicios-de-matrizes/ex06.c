#include <stdio.h>
#include <locale.h>

int MaiorElMat (int matriz[4][4]) {
	
	int maiorEl = matriz[0][0];
	
	int i, j;
	for (i = 0; i < 4; i++) {
		
		for (j = 0; j < 4; j++) {
			
			if (matriz[i][j] > maiorEl) {
				
				maiorEl = matriz[i][j];
				
			}
			
		}
		
	}
	
	return maiorEl;
}

void SaidaMaiorEl (int matriz[4][4]) {
	
	printf("\n>>>\tO maior elemento dentro da matriz é %d!", MaiorElMat(matriz));
	
}

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	int mat[4][4];
	
	printf("Entrada de valores para a matriz:\n\n");
	
	int i, j;
	for (i = 0; i < 4; i++) {
		
		for (j = 0; j < 4; j++) {
			
			printf(">>> mat[%d][%d]: ", i, j);
			scanf("%d", &mat[i][j]);
			
		}
		
	}
	
	SaidaMaiorEl(mat);
	
	return 0;
}
