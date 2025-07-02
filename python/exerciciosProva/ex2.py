'''
2) Faça um algoritmo que leia os dados de um arquivo que contém números inteiros, descubra qual
é o menor número e o maior número, e depois grave em outro arquivo esses dois números (o menor
e o maior).

'''

numList = []

with open("../../data/numeros.csv", "r") as file:
    for num in file:
        numList.append(int(num.strip()))

numList.sort()
smallestNumber = numList[0]
largestNumber = numList[(len(numList) - 1)]


with open("../../data/maiorMenorNumero.csv", "w") as file:
        file.write(str(smallestNumber) + '\n')
        file.write(str(largestNumber) + '\n')
