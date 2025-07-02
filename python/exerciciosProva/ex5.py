def fatorial(number):
    if number == 1:
        return 1
    return number * fatorial(number - 1)

print(f"O fatorial de 5 é {fatorial(5)}")