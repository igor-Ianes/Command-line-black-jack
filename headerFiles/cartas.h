#ifndef CARTAS_H
#define CARTAS_H
#include "cartas.h"
#include "Pilha.h" 
#include "iteradores.h" 
#include "graficos.h"

#define MAX 14
#define rangeMAX 14
#define rangeMIN 1
#define MAXCARTAS 56

#define COPAS 'C'
#define OUROS 'O'
#define ESPADAS 'E'
#define PAUS 'P'

// exibe simbolos ao inves de letras, mas tem problemas de compatibilidade

/*
#define COPAS 3
#define OUROS 4
#define ESPADAS 6
#define PAUS 5
*/

dado construtor(char suit, int peso);
void numerosAleatorios(int *arr, int maximo, int minimo);
int distribui_cartas(Pilha *p1, Pilha *p2, dado var, iterador auxiliar, int *sum, int *sum2, int *ace, int *ace2);
void distribui_carta(Pilha *Pilha, dado var, iterador auxiliar, int *soma, int *as);
void shuffle(int *copas, int *ouros, int *paus, int *espadas, int *chave, lista primos);
void inicializaBaralho(lista *baralho);
iterador removerUm(lista *primos);
iterador removerDois(lista *primos);

#endif