caracteres = list(map(str, "alo mundo"))

qtdVogais = {
    'a': 0,
    'e': 0,
    'i': 0,
    'o': 0,
    'u': 0
}

for c in caracteres:
    if c in 'aeiou':
        qtdVogais[c] += 1

saida = []
for vogal in "aeiou":
    if qtdVogais[vogal] != 0:
        saida.append(f"{vogal.upper()} = {qtdVogais[vogal]}")


if saida:
    print(", ".join(saida))
else:
    print("Nenhuma vogal encontrada.")
