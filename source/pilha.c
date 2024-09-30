#include <stdlib.h>
#include <stdio.h>

#include "Pilha.h"
#include "lista.h"

void inicializar_pilha( Pilha *pilha, int tamanho) {
   pilha->topo = 0;
   pilha->data = (dado*)malloc(tamanho * sizeof(char));
   pilha->tamanho = tamanho;
}

void push(Pilha *pilha, dado n){
  if(!isFull(pilha, pilha->tamanho)) {
        pilha->data[pilha->topo] = n;
        pilha->topo++;
      }
}

int pop(Pilha *pilha){
  if (isEmpty(pilha)) return -1;
  pilha->topo--;
  return 1;
}

int isFull(Pilha *pilha, int tamanho){
  return pilha->topo == tamanho-1;
}

int isEmpty(Pilha *pilha){
  return pilha->topo == 0;
}

int size(Pilha *pilha){
  int tam = pilha->topo + 1;
  return tam;
}

void destroy(Pilha *pilha){
  while(!isEmpty(pilha)){
    pop(pilha);
  }
}

int topo(Pilha *p, dado *item) {
  if( !isEmpty(p) ) {
    *item = p->data[p->topo -1];
    return 1;
  }
 return 0;
}