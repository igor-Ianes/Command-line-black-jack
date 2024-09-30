# PROJETO DE ESTRUTURA DE DADOS

  ### Implementacão do jogo de cartas blackJack utilizando as seguintes estruturas:

  * Pilha: com alocação dinâmica e sequencial
  * Lista: alocação dinâmica, duplamente encadeada, com sentinela e circular


## REGRAS E COMANDOS

  Regras

      Implementação do jogo de cartas blackJack, também conhecido no
    Brasil como Vinte Um. As regras seguem o padrão utilizado na maior
    parte do mundo, porem, sem o embaralhamento continuo, tornando  
    possivel prever os resultados apos certo numero de rodadas, assim
    eliminando em parte o fator sorte.
      Para vencer o jogador deve chegar o mais próximo de 21 na soma
    total de suas cartas, caso a soma ultrapasse esse valor o jogador
    perde a rodada.
      Alguns casos particulares que valem a pena ser pontuados, são o
    caso em que o jogador tenha mais de 21 pontos, porem possua algum
    ás, este terá seu valor convertido para 1, outra exceção é caso o
    jogador tenha uma mão com cinco cartas cuja soma seja menor que 21,
    nesse caso é declarada a vitória do jogador e por fim o dealer deve
    sempre pedir mais cartas ate atingir no mínimo 18 pontos, mesmo que
    tenha mais pontos que o jogador.


  Valor das cartas:

        cartas: 1, 2, 3, 4, 5, 6, 7, 8, 9 10   -- valem seu proprio valor

        cartas: J, K, e Q                      -- valem 10

        carta: A                               -- pode valer 11 ou 1

        Naipes são: C, O, E e P                -- não afetam a contagem
    

  Comandos:

      pressione  1     -- Para dar um HIT, ou seja, pedir mais cartas.
      pressione  2     -- Para dar um STAND, ou seja, ver as cartas do dealer.
      pressione  1     -- Para continuar.
      pressione  0     -- Para encerrar o jogo.



## REQUISITOS
    
1. GCC
2. GNU Make



## BUILD

* make all                      -- para compilação e execução do arquivo
* make compile                  -- para compilção do arquivo
* make exec                     -- para execução do arquivo ja compilado
* make clean                    -- para remover o executavel gerado
* mingw32-make all              -- para windows com mingw32



## CONTRIBUICÃO

Igor Ryan

