import random

memoria = []
tamanhoMemoria = 100
n = 0
rw = 0
p = 0

for i in range(0, tamanhoMemoria):
    n = random.randint(0, 100)
    memoria.append(n)

while rw == 0 or rw == 1:
    rw = int(input('[0] Ler\n[1] Escrever\n'))
    if rw == 0:
        p = int(input('Ler em qual posição do vetor? (0-{}): '.format(tamanhoMemoria - 1)))
        print(memoria[p])
    elif rw == 1:
        p = int(input('Escrever em qual posição do vetor? (0-{}): '.format(tamanhoMemoria - 1)))
        n = input('Escreva um número inteiro: ')
        memoria[p] = n
