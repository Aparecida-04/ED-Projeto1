


#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
#include "cadastro.h"

int main(){
	char nome[MAXSTR];
	
	printf("\nEntre com o nome: ");
	
	fgets(nome, MAXSTR, stdin);
	busca(nome);
	}

int busca(char *nome){
	FILE *dados, *indice;
	IndiceCadastro registro;
	char  nomebusca[MAXSTR], *p;

	IndiceCadastro encontrados[100];

	int conta = 0;
	
	p = nomebusca;
	strcpy(nomebusca, nome);
	while (*p != '\0') {
		*p = toupper(*p);
		p++;
		}



	indice = fopen(INDICE, "r");

	while(1){ //looping infinita

		fread(&registro, sizeof(registro), 1, indice);
		if (feof(indice))break;
		
		if (strstr (registro.nome, nomebusca)){

			strcpy(encontrados[conta].nome, registro.nome); //Copio o nome 
			encontrados[conta].localiza = registro.localiza;
			conta++;

			//printf("\n%d registro(s) encontrado(s)!!\nNome: %s - %ul\n", registro.nome, registro.localiza);
			}
		}
	printf("\n%d registro(s) encontrado(s)!!\n", conta);
	
	for (int i = 0; i < conta; i++)
		printf("Nome: %s", encontrados[i].nome);	
	
	return conta;
}