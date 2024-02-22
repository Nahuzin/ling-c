#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

typedef struct no{
	
	int valor;
	struct no *proximo;
	
}No;

void inserir_no_inicio(No **lista, int numero) {
	
	No *novo = malloc(sizeof(No));
	
	if (novo) {
		
		novo->valor = numero;
		novo->proximo = *lista;
		*lista = novo;
		
	} else {
		
		printf("Espaço de memória para o ponteiro não alocado!\n");
		
	}
	
}

No* remover(No **lista, int num) {
	
	No *aux, *remover = NULL;
	
	if(*lista){
		
		if((*lista)->valor == num) {
			
			remover = *lista;
			*lista = remover->proximo;
			
		} else {
			
			aux = *lista;
			while(aux->proximo && aux->proximo->valor != num);
				aux = aux->proximo;
			
			if(aux->proximo) {
				
				remover = aux->proximo;
				aux->proximo = remover->proximo;
			}
			
		}
		
	}
	
	return remover;
}

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	int opcao, valor, sairOuNao;
	No *removido, *lista = NULL;

	while (1) {
			
		do {
			
			printf(">>> Para a lista, digite:\n\n");
			printf("1 - Inserir valor númerico;\n2 - Verificar elementos na lista;\n3 - Remover valor númerico;\n4 - Sair.\n\n");
				
			printf("==> Opção: ");
			scanf("%d", &opcao);	
				
			switch(opcao){
			case 1:
					
				printf("Digite um valor para inserir na lista: ");
				scanf("%d", &valor);
				
				inserir_no_inicio(&lista, valor);
				
				system("cls");
				continue;
					
			case 2:
				
				printf("Valores na lista:\n\n[");
				
				No *temp = lista;
				while(temp != NULL) {
			
				printf(" %d ", temp->valor);
				temp = temp->proximo;
					
				}
				
				printf("]");
				
				printf("\n\nPressione \"ENTER\" para voltar ao menu principal: ");
				getch();
				
				system("cls");
				continue;
				
			case 3:
				
				printf("Digite o valor que deseja remover da lista: ");
				scanf("%d", &valor);
					
				removido = remover(&lista, valor);
					
				if (removido) {
						
					printf("Elemento para se remover: %d\n", removido->valor);
					free(removido);
					
				}
				
				printf("\n\nPressione \"ENTER\" para voltar ao menu principal: ");
				getch();
				
				system("cls");
				continue;
			
			case 4:
				
				printf(">>> Encerrando programa!");
				break;
			
			default:
				printf("Opção Inválida!\n");
				printf("Digite alguma tecla para tentar novamente: ");
				getch();
				system("cls");
				
			}
		
		} while(opcao < 1 || opcao > 4);
		
	}

	return 0;
}
