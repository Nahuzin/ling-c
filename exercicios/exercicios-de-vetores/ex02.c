#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	int num[10], totPairs = 0;
	
	printf(">>> Valores do vetor:\n\n");
	
	int i, j = 5;
	for (i = 0; i < 10; i++) {
		
		num[i] = j;
		
		printf("num[%d]: %d\n", i, num[i]);
		
		if (num[i] % 2 == 0) {
			
			totPairs += 1;
			
		}
		
		j++;
		
	}
	
	printf("\n>>>\tQuantidade de números pares no vetor \"num\": %d!", totPairs);
	
	return 0;
}
