def areaC(r):
    areaCirculo = 3.14 * r * r
    return areaCirculo
def areaT(b,h):
    areatriangulo = 0.5 * (b * h)
    return areatriangulo
def areaR(b,h):
    arearectangulo = b + h
    return arearectangulo

print('Essa é um programa para cálculo de área geométrica: \n Círculo (A) \n Triângulo (B)\n Rectângulo (C)')
escolha = str(input('Faz a sua escolha '))
if escolha == 'A':
    raio = float(input('Digite a raio: '))
    print(' A área é ', areaC(raio))
else:
    if escolha == 'B':
        baseT = float(input('Digite a base: '))
        alturaT = float(input('Digite a altura: '))
        print('A área desse triângulo é ', areaT(baseT,alturaT))
    else:
        escolha == 'C'
        baseR = float(input('Digite a base: '))
        alturaR = float(input('Digite a altura: '))
        print('A área desse rectângulo é ', areaR(baseR,alturaR))

