#!usr /bin/python3
#ep3.py: Exercício 3
#Autor: Aparecida Joana Moreto
#Data 28/02/2021
#
#Crie uma função 'lePHD' no módulo 'bioseq' que lê um arquivo
#PHD e salva dois arquivos no formato FASTA: um com os dados da
#sequência e outro com dados de qualidade. A função recebe o nome
#do arquivo PHD e salva dois arquivos FASTA com o nome da sequência
#(BEGIN_SEQUENCE) sucedido de '.fasta' para o arquivo com a sequência
#e '.qual' para o arquivo com dados de qualidade.
#


arq = open('10785.ab1.phd.1')

le = arq.readline()

while(le):
   if le.strip() != 'BEGIN_DNA':
      le = arq.readline()
      
   else:
      break
   
while (le):
   if le.strip() != 'END_DNA':
      print(le.strip().split(' ')[0], end =' ', sep =' ')
      le = arq.readline()
   else:
      break

