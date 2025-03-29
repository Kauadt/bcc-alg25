'''

Faça um programa que leia 10 números e mostre esses números em ordem crescente e em ordem decrescente.

a) se quiser, faça uma versão com 2 números apenas, usando variáveis simples
b) se quiser, faça uma versão com 3 números apenas, usando variáveis simples
c) para quantidades maiores de números, é recomendado utilizar uma estrutura de dados como um vetor para armazenar os números


'''

num1 = int(input("Digite um número: "))
num2 = int(input("Digite outro número: "))

if (num1 > num2):
    print(num1, num2)
else:
    print(num2, num1)
