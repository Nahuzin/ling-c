#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	int X[10];
	
	printf("Entrada de valores para o vetor:\n\n");
	
	int i;
	for (i = 0; i < 10; i++) {
		
		printf("==> X[%d]: ", i);
		scanf("%d", &X[i]);
		
	}
	
	int highestValue = X[0];
	int lowestValue = X[0];
	
	for (i = 1; i < 10; i++) {
		
		if (highestValue < X[i]) {
			
			highestValue = X[i];
			
		} else if (lowestValue > X[i]) {
			
			lowestValue = X[i];
			
		}
		
	}
	
	printf("\n\n>>>\tMaior elemento digitado: %d!\n", highestValue);
	printf(">>>\tMenor elemento digitado: %d!", lowestValue);
	
	return 0;
}
