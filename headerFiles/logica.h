#ifndef LOGICA_H
#define LOGICA_H

#include "cartas.h"
#include "Pilha.h" 
#include "iteradores.h" 
#include "graficos.h"

dado soma_cartas(dado data, int *sum, int *as);

void jogada01(lista baralho, Pilha *p1, Pilha *p2, iterador *auxiliar, int *sum, int *sum2, int *banco, stats *game);
void jogada02(lista baralho, Pilha *p1, Pilha *p2, iterador *auxiliar, int *sum, int *sum2, int *banco, stats *game);
void jogada03(lista baralho, Pilha *p1, Pilha *p2, iterador *auxiliar, int *sum, int *sum2, int *banco, stats *game);

void blackJackVerify(int sum, int sum2, int *banco, int *control);
void fiveVerify(int soma, int five, int *banco, int *control);
void hitVerify(int sum, int sum2, int *banco, int *control);
void standVerify(int sum, int sum2, int *banco, int *control);
void reinsere(Pilha *p1, lista primos);

#endif
