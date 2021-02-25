/*programa: cad.c
Lê arquivo CVS baixado do transparência. gov com dados de servidores públicos 
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*#include "cadastro.h"*/

#define MAXLIN 1000 

void extrai (char *lin, int elem, char *d); // protótipo da função por declaração implicitas

int main()
{
	FILE *fp;
	
	char linha[MAXLIN]; 
	char dado[MAXLIN];	

	
	fp = open("cadastro2019.cvs", "r");//abre arquivo para leitura (r)

	if (pf == NULL){
		printf("\nErro de abertura de arquivo");
		return -1;
		}
	
	//fget(linha, MAXLIN, fp); // fget= ler linha a linha


	while(fgets( linha, MAXLIN, fp){
		extrai(linha, 1, dado);
		if(! strcmp(dado, "PAULO BANDEIRA PAIVA")){
			extrai(linha, 4, d2);
			extrai(linha, 16, d3);
			printf("\n%s\n%s\n%s\n", dado, d2, d3);
			return 0; 
		}

		//*extrai(linha, 4, d2);
		extrai(linha, 16, d3)
		printf("\n%s %s %s", dado, d2, d3);
		extrai(linha, 4, d2);
		printf("\n %s", d2);
		extrai(linha, 16, d3);
		printf("\n %s", d3);*/
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
}
