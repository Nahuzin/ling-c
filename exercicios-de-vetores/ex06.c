#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	int vet[10];
	
	printf("Posi��es do vetor que cont�m n�meros �mpares:\n\n");
	
	int i, j = 9;
	for (i = 0; i < 10; i++) {
		
		vet[i] = j;
		
		if (vet[i] % 2 != 0) {
			
			printf("==> vet[%d]: %d\n", i, vet[i]);
			
		}
		
		j++;
		
	}
	
	return 0;
}
