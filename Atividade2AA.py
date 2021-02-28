#!usr /bin/python3
# ep1.py: Exercício 2
#Autor: Aparecida Joana Moreto
#Data 28/02/2021


#Faça uma função que recebe um nome de arquivo no formato FASTA,
#lê este arquivo e retorne a composição de amino-ácidos (AA) ou nucleotídeos(NA) num dicionário.
#(Utilize a estrutura de dados de Dicionário para armazenar os contadores de AA.)
#Faça um programa que solicite um nome de arquivo, chame a função criada anteriormente e imprima
#as quantidades e frequências de todos os AAs ou NAs presentes.



a  = open('gpcr.fas')
seq = ''
for linha in a.readlines():
   if linha[0] == '>': # retiro o título
      continue
   seq = seq + linha.strip() # retirar o "\n"
print(seq)
d = {}
for i in seq:
   if i in d:
      d[i]+=1
   else:
      d[i]=1
print(d)
for letra in d:

   print(letra,': \t', d[letra], "\t%.2f%% "%(100* d[letra]/len(seq)))

   
 
