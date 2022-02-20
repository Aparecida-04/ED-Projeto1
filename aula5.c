#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char *argv[])
{
	// a linha abaixo configura o idioma para o protuguês
	setlocale(LC_ALL, "Portuguese");
	//a linha abaixo muda a cor do texto
	system("color 5E");
	printf("Olá mundo\n");
	system("pause");
	system("cls");
	printf("Professor José de Assis");
	return 0;

}