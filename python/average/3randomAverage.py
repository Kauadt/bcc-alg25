# c) Cálculo de média com números rândomicos
# Quero calcular a média dos números randômicos e dps mostrar os números utilizados
import random

sum = 0
scores = []

for i in range(10):
    randomScore = random.randint(0, 10)
    sum += randomScore
    scores.append(randomScore)
else:
    print("Notas: {}\nMédia final: {}".format(scores, sum/10))