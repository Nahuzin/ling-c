#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	int mat[3][5], numsBetween = 0;
	
	int i, j, k = 15;
	for (i = 0; i < 3; i++) {
		
		for (j = 0; j < 5; j++) {
			
			mat[i][j] = k;
			
			if (mat[i][j] >= 15 && mat[i][j] <= 20) {
				
				printf("%d\n", mat[i][j]);
				
				numsBetween += 1;
				
			}
			
			k++;
			
		}
		
	}
	
	printf(">>>\tExiste(m) %d número(s) entre 15 e 20 na matriz!", numsBetween);
	
	return 0;
}
