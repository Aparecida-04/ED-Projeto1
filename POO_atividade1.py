Python 3.7.3 (v3.7.3:ef4ec6ed12, Mar 25 2019, 22:22:05) [MSC v.1916 64 bit (AMD64)] on win32
Type "help", "copyright", "credits" or "license()" for more information.
>>> #Neste primeiro EP, para ser realizado em sala de aula (se for possível),
#você deverá fazer um pequeno programa em Python que receba como entrada
#números positivos e determine se o número é primo ou não. O programa deve
#encerrar quando o usuário entrar com algo que não seja um número ou um enter
#sem digitar nada.
print("Atividade 1:")

print("Valores primos.")

n = int(input("Digite um número inteiro positivo: "))
numero = 2
primo = True

while (numero <= n-1) and (primo):
    if (n % numero == 0): 
        primo = False
        numero = numero + 1
        
if (primo):
    print("É primo.")
else:
    print("Não é primo.")

