"""Função de fatorial

Aluno: henrique, euclides, xenao, pitagoras, minha cadela
"""
def factorial():
    i = 1
    f = 1
    n = int(input("Por favor digite um número:\n"))
    while (i <= n):
        f = f * i
        i = i + 1

    print(f)
    return f


factorial()
