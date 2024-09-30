#ifndef GRAFICOS_H
#define GRAFICOS_H

#include "Pilha.h" 
#include "lista.h" 

typedef struct stats{
    int ace, ace2, stand;
} stats;

void red();
void green();
void blue();
void yellow();
void neutro();

void cabecalho();
void fimRodada();
void jogadas();
void movimentoInvalido();

void gameStats(int *soma_player, int *soma_dealer, int *banco);
void Pilha_jogador(Pilha *p1, Pilha *p2);
void printCard(dado item2);

void vitoria(int banco);
void derrota(int banco);
void empate(int banco);
void saldo(int banco);

void fimDeJogo(int banco);
void Pilha_dealer(Pilha *p1, Pilha *p2);

#endif