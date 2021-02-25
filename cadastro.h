/*
*cadastro.h
*Arquivo de cabeçalho e definições 
*/

//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>

#define MAXLIN 1000 
#define MAXSTR 200

void extrai (char *lin, int elem, char *d); // protótipo da função por declaração implicitas
void criaIndex(char *nomearq, char *nomeind);


typedef struct CADASTRO { 
	char nome[MAXSTR];
	unsigned long loc;
	} Cadastro;
