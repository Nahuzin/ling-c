#include <stdio.h>
#include <locale.h>

int UserInput() {
	
	int input;
	
	printf("Digite um número para verificar quantas vezes ele se repete na matriz (o número deve ser positivo):\n");
	printf("Número: ");
	
	do {
		
		scanf("%d", &input);
		
		if (input < 0) {
			
			printf("Número de entrada inválido...\nPor favor, redigite: ");
			
		}
		
	} while (input < 0);
	
}

void DisplayRepeats (int matriz[4][4], int chosenNumber) {
	
	int totRepeatsChosenNumber = 0;
	
	int i, j;
	for (i = 0; i < 4; i++) {
		
		for (j = 0; j < 4; j++) {
			
			if (matriz[i][j] == chosenNumber) {
				
				totRepeatsChosenNumber += 1;
				
			}
			
		}
		
	}
	
	printf(">>>\tO %d aparece %d vez(es) na matriz!", chosenNumber, totRepeatsChosenNumber);
	
}

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	int mat[4][4];
	
	int i, j, k = 3;
	for (i = 0; i < 4; i++) {
		
		for (j = 0; j < 4; j++) {
			
			mat[i][j] = k;
			k++;
			
		}
		
	}
	
	int input = UserInput();
	
	DisplayRepeats(mat, input);
	
	return 0;
}
