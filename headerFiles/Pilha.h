#ifndef DEQUE_H
#define DEQUE_H
#include "lista.h" // possibilita o uso do tipo dado

typedef struct Pilha{
  dado *data;
  int topo, tamanho;
} Pilha;

void inicializar_pilha (Pilha *pilha, int tamanho); //inicializa
int pop(Pilha *pilha); //desempilha
void push(Pilha *pilha, dado n); //empilha
int isEmpty(Pilha *pilha); //verifica pilha vazia
int isFull(Pilha *pilha, int tamanho); //verifica pilha cheia
int size(Pilha *pilha); //verifica tamanho da pilha
void destroy(Pilha *pilha); // destroi a pilha
int topo(Pilha *p, dado *item); // retorna elemento do topo
#endif