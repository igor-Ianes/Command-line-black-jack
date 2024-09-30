#include <stdio.h>
#include <stdlib.h>

#include "lista.h" 
#include "Pilha.h" 
#include "iteradores.h"

#include "logica.h"
#include "cartas.h"
#include "graficos.h"

#define FICHAS 3

int main(void) {

    lista baralho;
    Pilha p1, p2;
    iterador auxiliar;
    stats game;
    
    /*control comanda o sinal de vitoria ou derrota e 
    control_cartas verifica se o jogador possui 5 cartas */
    int soma_player = 0, soma_dealer = 0;
    int control = 0, control_cartas = 0, continuar = 0;
    int jogada  = 1, banco = FICHAS;

    /* jogada eh inicializado com 1 pois ao ser executado o jogo
    automaticamente iniciara a rodada inicial, ja banco eh 
    inicializado com o numero de fichas que o jogador tera.*/

    game.ace2  = 0;  // contagem de as do dealer
    game.ace   = 0;  // contagem de as do jogador
    game.stand = 0;  // sinal de controle para stand
 
    inicializar(&baralho);
  
    inicializaBaralho(&baralho);

    auxiliar = primeiro(&baralho);
    
    inicializar_pilha(&p1, 100);
    inicializar_pilha(&p2, 100);

    cabecalho();

 do{
      /* em jogada01 as cartas inicias sao distribuidas e a verificacao de
      blackJack eh feita, caso o jogador tenha 21 pontos a vitoria e declarada*/

      jogada01( baralho, &p1, &p2, &auxiliar, &soma_player, &soma_dealer, &banco, &game);
      blackJackVerify(soma_player, soma_dealer, &banco, &control);

      /* passada a verificacao de blackJack o jogador pode pedir mais cartas
      caso considere sua pontuacao baixa, no bloco while abaixo essa ideia eh
      implementada, tendo como condicao de parada o jogador executar um stand(1)
      ou  ultrapassar 21 pontos.
      */

      while(jogada != 2 && soma_player < 21 && control == 0){
        jogadas();
       do{
          int temp = scanf("%d", &jogada);
          if(jogada != 1 && jogada!= 2 && temp == 1){movimentoInvalido();}
        } while(jogada != 1 && jogada!= 2);

        if(jogada == 1){
          if(soma_player < 21){
            jogada02( baralho, &p1, &p2, &auxiliar, &soma_player, &soma_dealer, &banco, &game);
          }
        }
        fiveVerify(soma_player, control_cartas, &banco, &control);
        if(soma_player == 21 || control_cartas == 2){
          control_cartas = 0;
          break;
          }
        control_cartas += 1;
      } 
      
      hitVerify(soma_player, soma_dealer, &banco, &control);

      /*caso o jogador alcance 21 pontos enqyanto pede mais cartas, sua vitoria
      eh decretada, caso contrario, a carta oculta do dealer eh revelada e
      enquanto sua pontuacao for menor que 18 pontos ele pedira mais cartas*/

      if(soma_player < 21 && soma_dealer < 21  && control == 0){
        do{

          if(soma_dealer <= 17){
            jogada03( baralho,&p1, &p2, &auxiliar, &soma_player, &soma_dealer, &banco, &game);
          }
          else if (soma_dealer > 17){
            Pilha_jogador(&p1, &p2);
            gameStats(&soma_player, &soma_dealer, &banco);
          }

        } while(soma_dealer < 18);
        standVerify(soma_player, soma_dealer, &banco, &control);
      }

      else if(soma_dealer == 21){
        Pilha_jogador(&p1, &p2);
        gameStats(&soma_player, &soma_dealer, &banco);
        standVerify(soma_player, soma_dealer, &banco, &control);
      }
   
      /*aqui se encerra a rodada, o proximo bloco while retorna as cartas ao 
      fim do baralho e zera as pilhas e variaveis de controle para a proxima
      rodada do jogo*/

      do{
        reinsere(&p1, baralho); 
      } while(!isEmpty(&p1));              
                                          
      do{
        reinsere(&p2, baralho);
      } while(!isEmpty(&p2));                     

        jogada = 1;
        soma_player = soma_dealer = control = 0;
        game.ace2   = game.ace = game.stand = 0;
        control_cartas = 0;
      
        if(banco < 1)
          break;

        fimRodada();

        do{
          int temp = scanf("%d", &continuar);
          if(continuar != 1 && continuar!= 0 && temp == 1){movimentoInvalido();}
        } while(continuar != 1 && continuar!= 0);

    } while( continuar == 1);

    fimDeJogo(banco);
 
    destruir(&baralho);
    destroy(&p1);                 
    destroy(&p2);

 return 0;
}
