#include <stdio.h>
#include <locale.h>

int CalcularPosFib (int limite) {
	
	if (limite == 0 || limite == 1) {
		
		return 1;
		
	} else {
		
		return CalcularPosFib (limite - 1) + CalcularPosFib(limite - 2);
		
	}
	
}

void ExibirPosFib (int lim) {
	
	printf("\n>>>\tA soma do(s) elemento(s) da sequ�ncia de Fibonacci at� a posi��o %d � igual a %d!", lim, CalcularPosFib(lim));
	
}

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	int limFib;
	
	printf("\t==> Digite quantas posi��es da sequ�cia de Fibonacci deseja somar <==\n");
	printf("\t==> OBS: A soma sempre ocorre entre um termo e o termo seguinte, come�ando em 1 <==\n\tExemplo: 1 + 1 = 2 | 1 + 2 = 3 | 2 + 3 = 5...\n");
	printf("\t>>> ESCOLHA: ");
	scanf("%d", &limFib);
	
	ExibirPosFib(limFib);
	
	return 0;
}
