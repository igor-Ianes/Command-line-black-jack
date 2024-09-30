#	MAKEFILE

FILES=-IheaderFiles	source/main.c	source/lista.c	source/pilha.c	source/iteradores.c	source/cartas.c	source/graficos.c	source/logica.c
OPTS=-Wall
OUTPUT=blackJack

all:	compile	exec


compile:

	@	echo	"Compilando	o	arquivo	$(OUTPUT)..."

	gcc	$(OPTS)	-o	$(OUTPUT)	$(FILES)


exec:	
	
	@	echo	"Execucao	do	arquivo	$(OUTPUT)..."
	
	./$(OUTPUT)
	

clean:
	
	rm		-rf	*.o	$(OUTPUT)
