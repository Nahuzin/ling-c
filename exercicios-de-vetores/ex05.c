#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	int vet[8];
	
	printf("Valores que se encontram nas posições pares do vetor:\n\n");
	
	int i, j = 1;
	for (i = 0; i < 8; i++) {
		
		vet[i] = j;
		
		if (i % 2 == 0) {
			
			printf("vet[%d]: %d\n", i, vet[i]);
						
		}
		
		j++;
		
	}
	
	return 0;
}
