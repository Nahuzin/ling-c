#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	int vet[10], totOdd = 0;
	
	printf("Posi��es do vetor com n�meros �mpares e seus valores:\n\n");
	
	int i, j = 3;
	for (i = 0; i < 10; i++) {
		
		vet[i] = j;
		
		if (vet[i] % 2 != 0) {
			
			printf(">>>\tvet[%d]: %d\n", i, vet[i]);
			totOdd += 1;
		}
		
		j++;
		
	}
	
	printf("\n>>>\tTotal de n�meros �mpares no vetor: %d!", totOdd);
	
	return 0;
}
