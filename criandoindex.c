/*programa: cad.c
*Lê arquivo CVS baixado do transparência. gov com dados de servidores públicos */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "cadastro.h"

//#define MAXLIN 1000 

void extrai (char *lin, int elem, char *d); // protótipo da função por declaração implicitas

int main(){
	
	criaIndex("cadastro2019.csv","cadastro2019.ind");

}

void criaIndex(char *nomearq, char *nomeind){
	FILE *entra, *sai;
	char linha[MAXLIN];	
	char dado[MAXSTR];
	Cadastro cad;

	entra = fopen(nomearq, "r");
	sai = fopen(nomeind, "wb");// binário

	if (!entra || !sai){
		printf("\nErro de abertura de arquivo");
		//return 0;
		}
		
	while ( fgets(linha, MAXLIN, entra)){
		extrai(linha, 1, dado);
		strcpy(cad.nome, dado);
		cad.loc = ftell(entra); //pega a posição local
		
		fwrite(&cad, sizeof(cad), 1, sai);
		}
}


void extrai (char *lin, int elem, char *d){
	
	char linha[MAXLIN], *p, *q;
	int i = 0; //contador de ';' para saber qual ponto estou

	strcpy(linha, lin); 
	p = linha;

	while(*p !='\0'){
		if (elem == i){
			if (*p == '"') p++;
				q = p;
				while(*q != '"') q++;
				*q = '\0'; 
				strcpy(d, p);
				return;
			}

		if (*p == ';'){
			i++;
			}
		p++; // passa para a proxima letra

		}
	}

