a = int(input('Digite a: '))
b = int(input('Digite b: '))
resultado = 0

for i in range(0, b):
    resultado += a

print('{} x {} = {}'.format(a, b, resultado))
