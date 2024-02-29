#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

typedef struct no {
	
	int valor;
	struct no *proximo;
	
}No;

void para_voltar_ao_menu() {
	
	printf("\n>=> Pressione a tecla \"ENTER\" para voltar ao menu principal: ");
	getch();
	system("cls");
	
}

void exibir_valores_da_lista(No **lista) {
	
	No *aux = *lista;
	
	printf("\n[");
	while(aux != NULL) {
		
		printf(" %d ", aux->valor);
		aux = aux->proximo;
		
	}
	printf("]\n");
	
}

void inserir_no_inicio(No **lista, int num) {
	
	No *novo = malloc(sizeof(No));
	
	if (novo) {
		
		novo->valor = num;
		novo->proximo = *lista;
		*lista = novo;
		
	} else {
		
		printf("Novo nó não pôde ser alocado!\n");
		
	}
	
}

void inserir_no_fim(No **lista, int num) {
	
	No *aux, *novo = malloc(sizeof(No));
	
	if (novo) {
		
		novo->valor = num;
		novo->proximo = NULL;
		
		if (*lista == NULL) {
			
			*lista = novo;
			
		} else {
			
			aux = *lista;
			
			while (aux->proximo != NULL) {
				
				aux = aux->proximo;
			
			}
			
			aux->proximo = novo;
			
		}
		
	} else {
		
		printf("Novo nó não pôde ser alocado!\n");
		
	}
	
}

void remover_no_inicio(No **lista) {
	
	if (*lista == NULL) {
		
		printf("Não existem nós para serem removidos da lista!");
		
	} else {
		
		No *aux = *lista;
		*lista = (*lista)->proximo;
		free(aux);
		
	}
	
}

void remover_no_fim(No **lista) {
	
	if (*lista == NULL) {
		
		printf("Não existem nós para serem removidos da lista!");
		
	} else {
		
		No *aux = *lista;
		No *ant = NULL;
		
		while(aux->proximo != NULL) {
			
			ant = aux;
			aux = aux->proximo;
			
		}
		
		if (ant == NULL) {
			
			free(*lista);
			*lista = NULL;
			
		} else {
			
			ant->proximo = NULL;
			free(aux);
			
		}
	}
	
}

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	No *lista = NULL;
	int opcao, valor;
	
	do {
	
		do {
			
			printf("=-=-= Lista Simplesmente Encadeada =-=-=\n\n");
			printf(">>> Para a lista, digite:\n");
			printf("1 - Para ver os valores da lista;\n2 - Para inserir um valor no início da lista;\n3 - Para inserir um valor no fim da lista;\n4 - Para remover um valor no início da lista;\n");
			printf("5 - Para remover um valor no final da lista;\n6 - Para finalizar o programa.\n\n");
			
			printf("==> OPÇÂO: ");
			scanf("%d", &opcao);
			
			switch(opcao) {
				
				case 1:
					exibir_valores_da_lista(&lista);
					
					para_voltar_ao_menu();
					continue;
					
				case 2:
					printf("Digite o valor que você deseja inserir: ");
					scanf("%d", &valor);
					
					inserir_no_inicio(&lista, valor);
					
					para_voltar_ao_menu();
					continue;
				
				case 3:
					printf("Digite o valor que você deseja inserir: ");
					scanf("%d", &valor);
					
					inserir_no_fim(&lista, valor);
					
					para_voltar_ao_menu();
					continue;
				
				case 4:
					remover_no_inicio(&lista);
					
					printf("Nó do início removido com sucesso!\n");
					para_voltar_ao_menu();
					continue;
					
				case 5:
					remover_no_fim(&lista);
					
					printf("Nó do fim removido com sucesso!\n");
					para_voltar_ao_menu();
					continue;
					
				case 6:
					printf("\n>>>\tPrograma finalizado com sucesso!\t<<<");
					break;
					
				default:
					printf("Opção Inválida!\n");
					para_voltar_ao_menu();
					continue;
			}
			
		} while (opcao < 1 || opcao > 6);
	
	} while (opcao != 6);
	
	
	return 0;
}
