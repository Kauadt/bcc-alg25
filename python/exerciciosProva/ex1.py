'''
1) Faça um algoritmo que solicite números inteiros positivos ao usuário e ao final do programa
informe a soma dos 2 maiores números. O usuário fornece números até uma quantidade máxima de
10 números, ou até que o número zero seja informado.

'''

numList = []

for i in range(10):
    num = int(input("Digite um número: "))
    if num == 0:
        numList.append(num)
        break
    numList.append(num)

numList.sort()

lastNumber = len(numList) - 1
sum = numList[lastNumber] + numList[(lastNumber - 1)]
print(sum)

