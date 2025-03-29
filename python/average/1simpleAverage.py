# Programa que calcula a média de 10 números
# a) Cálculo ao final

sum = 0
for i in range(10):
    sum += float(input("Por favor, informe a nota {}: ".format(i+1)))
else:
    print("A média é: {}".format(sum/10))
