#include <stdio.h>
#include <locale.h>

int FatNum (int numero) {
	
	if (numero == 0) {
		
		return 1;
		
	} else {
		
		return numero * FatNum (numero - 1);
		
	}
	
}

void ExibirFatorial (int num) {
	
	printf("\nO fatorial de %d � %d!", num, FatNum(num));
	
}

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	int num;
	
	printf(">>>\tDigite um n�mero inteiro para ver o fatorial do mesmo: ");
	scanf("%d", &num);
	
	ExibirFatorial(num);
	
	return 0;
}
