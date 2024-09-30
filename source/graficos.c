#include <stdio.h>
#include "graficos.h"

void printCard(dado item2){
          if(item2.valor != 11 && item2.valor != 12 && item2.valor != 13  && item2.valor != 14){
          printf("|%c %2d| ", item2.naipe, item2.valor);}
          if(item2.valor == 11){printf("|%c  J| ", item2.naipe);}
          if(item2.valor == 12){printf("|%c  Q| ", item2.naipe);}
          if(item2.valor == 13){printf("|%c  K| ", item2.naipe);}
          if(item2.valor == 14){printf("|%c  A| ", item2.naipe);} 
}

/*funcoes Pilha_ sao responsaveis por exibir as cartas na saida
sendo que print_dealer tem como diferencial omitir a primeira carta 
do dealer*/

void Pilha_jogador(Pilha *p1, Pilha *p2) {
     Pilha pp  = *p1;
     Pilha pp2 = *p2;
     green();
     printf("=======================================\n");
     neutro();
     dado item1, item2;

      while(pp2.topo != 0){                       
           if(pp2.topo != 0){
               item2 = pp2.data[pp2.topo-1];
               printCard(item2);
               pp2.topo--;}
      }
      printf("\n\n");
      while(pp.topo != 0){
          if(pp.topo != 0){
               item1 = pp.data[pp.topo-1];
               printCard(item1);
               pp.topo--;}
     }
     printf("\n\n");
}

void Pilha_dealer(Pilha *p1, Pilha *p2) {
   Pilha pp  = *p1;
   Pilha pp2 = *p2;
   dado item1, item2;
     green();
     printf("=======================================\n");
     neutro();
       if(pp2.topo != 0){
           pp2.topo--;
           item2 = pp2.data[pp2.topo-1];
           printf("|####| ");
           printCard(item2);
       }

       printf("\n\n");

       while(pp.topo != 0){
          if(pp.topo != 0){
               item1 = pp.data[pp.topo-1];
               printCard(item1);
               pp.topo--;
          }
         
       }
     printf("\n\n");
}

void gameStats(int *soma_player, int *soma_dealer, int *banco){
      printf("%.2d dealer\n", *soma_dealer);
      printf("%.2d jogador                %d banco\n", *soma_player, *banco);
      green();
      printf("=======================================\n\n");
      neutro();
}

void cabecalho(){
     printf("\n  *** BLACKJACK ***\n\n");
}

void fimRodada(){
     printf("Digite 1 para continuar e 0 para sair: ");
}

void jogadas(){
     blue();
     printf("jogada: ");
     neutro();
}

void movimentoInvalido(){
     printf("Movimento invalido\n");
}

void vitoria(int banco){
     yellow();
     printf("\njogador venceu\n");
     neutro();
     printf("saldo: %d$\n\n", banco);
}

void empate(int banco){
     printf("\nempate\n");
     printf("saldo: %d$\n\n", banco);
}

void derrota(int banco){
     red();
     printf("\njogador perdeu\n");
     neutro();
     printf("saldo: %d$\n\n", banco);
}
void saldo(int banco){
     printf("saldo: %d$\n", banco);
}

void fimDeJogo(int banco){
     blue();
     printf("\n=======================================\n");
     printf("\nfim de jogo\n\n");
     printf("saldo final: %d\n", banco);
     printf("\n=======================================\n");
     neutro();
}

void red(){
  printf("\033[1;31m");
}
void blue(){
  printf("\033[1;34m");
}
void green(){
  printf("\033[1;32m");
}
void yellow(){
  printf("\033[0;33m");
}
void neutro(){
  printf("\033[0m");
}