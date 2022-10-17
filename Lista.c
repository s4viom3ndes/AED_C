#include <stdio.h>
#include <stdlib.h>

typedef struct no{

int valor;
struct No *prox;

}No; 

typedef struct {

No *inicio;
int tam;
  
}Lista; 

void imprimeLista(Lista *lista);
void inserirInicio(Lista *lista, int valor);
void inserirFim(Lista *lista, int valor);

int main(void) {

  Lista lista; 
  int  opcao, valor; 

  lista.inicio = NULL; 
  lista.tam = 0;

  do{
    printf("1 - Inseriri no inicio\n2 - Imprimir\n3 - Inserir no final\n5 - Sair\n");
      scanf("%d", &opcao);
    switch(opcao){

      case 1: 
        printf("Digite um valor a ser inserido: ");
          scanf("%d", &valor);
        inserirInicio(&lista, valor);
      break;

      case 2:
        imprimeLista(&lista);
      break; 

      case 3: 
        printf("Digite um valor a ser inserido: ");
          scanf("%d", &valor);
        inserirFim(&lista, valor);
      break;

      case 5:
        printf("Finalizando...");
      break; 

      default: printf("Opção inválida.");
      
    }
  }while(5);


  return 0;
} 
//inserçao no inicio da lista
void inserirInicio(Lista *lista, int valor){
  No *novoNo = (No*)malloc(sizeof(No)); 

  novoNo->valor = valor;
  novoNo->prox = lista->inicio;
  lista->inicio = novoNo; 
  lista->tam++;
} 

void inserirFim(Lista *lista, int valor){

  No *no, *novoNo = (No*)malloc(sizeof(No)); 
  
  novoNo->valor = valor;
  novoNo->prox = NULL;
  lista->tam++;
   
  if(lista->inicio == NULL){
    lista->inicio = novoNo;
     
  } 
  else{
    no = lista->inicio; 
    while(no->prox != NULL)
    no = no->prox; 
    no->prox = novoNo; 
        
  }
  lista->tam++;
}

void imprimeLista(Lista *lista){
  No *inicio = lista->inicio;
  printf("Tamanho da lista: %d\n", lista->tam);
  while(inicio!=NULL){
    printf("Valor: %i \n", inicio->valor); 
    inicio = inicio->prox;
  } 
  
}