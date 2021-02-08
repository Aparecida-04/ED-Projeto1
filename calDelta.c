/*
Atividade-2: Raízes de equação de segundo grau
*/
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
	float delta, a, b, c, raiz1, raiz2;
	printf("Calculo das Raizes da equacao de segundo grau\n");
	
	printf("Digite o valor de 'a': \n");
	scanf("%f",&a);
	if (a == 0){
		printf("EQUACAO NAO Eh DE SEGUNDO GRAU.");}
	printf("Digite o valor de 'b': \n");
	scanf("%f",&b);
	
	printf("Digite o valor de 'c': \n");
	scanf("%f",&c);
	
	delta =  ( b * b ) - (4 *  a * c);
	
		
	if (delta < 0) {
		printf("\nDelta = %.2f (Delta < 0): Raizes nao pertence ao conjunto dos numeros reais. ", delta);		
		}
			
	else if (delta > 0) {
		raiz1 = ((-b) + sqrt(delta))/(2 * (a));
		raiz2 = ((-b) - sqrt(delta))/(2 * (a));
		printf("\nDelta = %.2f (Delta > 0)\nValor da raiz 1 = %.2f\nValor da raiz 2 = %.2f", delta, raiz1, raiz2);
		}	
	else {
		raiz1 = ((-b) + sqrt(delta))/(2 * (a));
		printf("\nDelta = %.2f (Delta = 0): A funcao possui duas raiz iguais.\n Raiz = %.2f ", delta, raiz1);
		}

	return 0;
}
		
