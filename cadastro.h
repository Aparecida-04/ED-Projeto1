/*
*cadastro.h
*Arquivo de cabeçalho e definições 
*/

//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>

#define MAXLIN 1000 
#define MAXSTR 200

#define DADOS "cadastro2019.csv"
#define INDICE "cadastro2019.ind"

void extrai (char *lin, int elem, char *d); // protótipo da função por declaração implicitas
void criandoindex(char *nomearq, char *nomeind);
int busca(char *nome);


typedef struct INDICECAD { 
	char nome[MAXSTR];
	unsigned long localiza;
	} IndiceCadastro;

//Define números de campos do arquivo para ser usado como elemento da função extrai()


//*#define  Id_SERVIDOR_PORTAL 1
#define  NOME 2
#define  CPF 3
#define  MATRICULA 4
#define  DESCRICAO_CARGO 5
#define  CLASSE_CARGO 6
#define  REFERENCIA_CARGO 7
#define  PADRAO_CARGO 8
#define  NIVEL_CARGO 9
#define  SIGLA_FUNCAO 10
#define  NIVEL_FUNCAO 11
#define  FUNCAO 12
#define	 CODIGO_ATIVIDADE 13
#define  ATIVIDADE 14
#define  OPCA_PARCIAL 15
#define  COD_UORG_LOTACAO 16
#define  UORG_LOTACAO 17
#define  COD_ORG_LOTACAO 18    
*/