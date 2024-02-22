#include <stdio.h>
#include <locale.h>
#include <string.h>

struct inf_al {
	
	int numMatAl;
	char nomeAl[50];
	float notasAl[3];
	
};

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	struct inf_al alunos[5];
	
	printf(">>>\tInformações dos alunos\t<<<\n\n");
	
	float mediaDosAlunos[5], somaNotasPorAluno[5];
	int contadorPorAluno[5];
	
	int i, j;
	for (i = 0; i < 5; i++) {
		
		contadorPorAluno[i] = 0;
		somaNotasPorAluno[i] = 0;
		
		printf("=-=-= %dº aluno =-=-=\n\n", i + 1);
		
		printf("> Nº de matrícula: ");
		scanf("%d", &alunos[i].numMatAl);
		
		fflush(stdin);
		
		printf("> Nome: ");
		fgets(alunos[i].nomeAl, 50, stdin);	
		
		if (alunos[i].nomeAl[strlen(alunos[i].nomeAl) - 1] == '\n') {
			
			alunos[i].nomeAl[strlen(alunos[i].nomeAl) - 1] = '\0';
			
		}
		
		printf("> Agora diga quais foram as 3 notas desse aluno:\n\n");
		
		for (j = 0; j < 3; j++) {
			
			printf(">>> %dª nota: ", j + 1);
			scanf("%f", &alunos[i].notasAl[j]);
			
			somaNotasPorAluno[i] += alunos[i].notasAl[j];
			contadorPorAluno[i] += 1;
			
		}
		
		mediaDosAlunos[i] = somaNotasPorAluno[i] / contadorPorAluno[i];
		
		printf("\n=-=-=-=-=-=-=-=-=-=-=\n");
		
	}

	float maiorMedia = mediaDosAlunos[0];
	char alMaiorMedia[50];

	strcpy(alMaiorMedia, alunos[0].nomeAl);

	for (i = 0; i < 4; i++) {
		
		if (maiorMedia < mediaDosAlunos[i + 1]) {
			
			maiorMedia = mediaDosAlunos[i + 1];
			strcpy(alMaiorMedia, alunos[i + 1].nomeAl);
			
		}
		
	}

	printf("\n>>>\tO aluno %s obteve a melhor média entre os alunos, sendo essa %.2f!", alMaiorMedia, maiorMedia);

	return 0;
}
