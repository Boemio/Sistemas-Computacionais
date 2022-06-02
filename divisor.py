numerador = int(input('Digite o numerador: '))
denominador = int(input('Digite o denominador: '))
resultado = 0

print('{} ÷ {} = '.format(numerador, denominador), end='')

while numerador > 0:
    numerador -= denominador
    if numerador < 0:
        break
    resultado += 1

print(resultado)
