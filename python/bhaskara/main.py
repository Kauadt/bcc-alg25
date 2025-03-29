import math

abc = input("Digite um valor: ")

abc = abc.split(" ")

valores = []

for i in abc:
    valores.append(float(i))

    
A, B, C = valores

delta = (B ** 2) - (4 * A * C)

if delta < 0 :
    print("Impossivel calcular")
elif A == 0:
    print("Impossivel calcular")
else:
    x1 = (-B + (math.sqrt(delta))) / (2 * A)
    x2 = (-B - (math.sqrt(delta))) / (2 * A)
    print('R1 = {:.5f} \nR2 = {:.5f}'.format(x1, x2))


