# b) Cálculo de média de 10 números com resultados parciais

sum  = 0

for i in range(10):
    sum += float(input("Por favor, informe a nota {}: ".format(i + 1)))
    if(i < 9):
        print("A média parcial é: {}".format(sum/(i+1)))
else: 
    print("A média final é {}".format(sum/10))