#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	int num[6];
	
	int i, j = 3;
	for (i = 0; i < 6; i++) {
		
		num[i] = j;
		j++;
		
	}
	
	printf("Saída de valores:\n\n");
	
	for (i = 5; i >= 0; i--) {
		
		printf(">>>\tnum[%d]: %d\n", i, num[i]);
		
	}
	
	return 0;
}
