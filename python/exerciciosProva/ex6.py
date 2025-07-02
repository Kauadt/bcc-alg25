matrix = [
    [0, 0, 0, 1, 1, 1],
    [1, 1, 1, 1, 2, 1],
    [1, 2, 1, 1, 1, 1],
    [1, 1, 1, 0, 0, 0],
    [0, 0, 1, 1, 1, 0],
    [0, 0, 1, 2, 1, 0]
]

def hereIsABomb(x, y): 
    if matrix[x][y] == 0:
        return print("Fique tranquilo(a)! Não há bombas por perto")
    if matrix[x][y] == 1:
        return print("Cuidado! Há bombas por perto")
    return print("Ops! Você encontrou uma bomba... BOOOOOOOM!!!")
    
coordX = int(input())
coordY = int(input())

hereIsABomb(coordX, coordY)