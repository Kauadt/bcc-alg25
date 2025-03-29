from libs.manageData import *

acc = 0

file = open("./data/data1.csv", "r")

if file:
    for row in file:

        year = str(getPart(row, ",", 1))
        state = getPart(row, ",", 2)

        if year == "2010" and state == '"Santa Catarina"':
            acc += int(getPart(row, ",", 4))
    print("O total de incêndios no ano de 2010 em Santa Catarina foi {}".format(acc))