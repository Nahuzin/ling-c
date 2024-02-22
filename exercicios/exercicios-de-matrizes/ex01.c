#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	int mat[3][4];
	
	printf("Valores contidos na matriz:\n\n");
	
	int i, j, k = 1;
	for (i = 0; i < 3; i++) {
		
		for (j = 0; j < 4; j++) {
			
			mat[i][j] = k;
			printf(">>>\tmat[%d][%d]: %d\n", i, j, mat[i][j]);
			
			k++;
			
		}
		
	}
	
	return 0;
}
