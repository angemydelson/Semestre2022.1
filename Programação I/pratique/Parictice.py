def calculos(sl):
    sf = sl[0]
    if sl[1] < 20000:
        sf += sl[1] * 0.03
    else:
        sf += sl[1] * 0.05 
    sf -= 1/30 * sl[0] * sl[2]
    sf -= sl[3]
    return sf
dado = []
valorl = float(input(''))
dado.append(valorl)
valors = float(input(''))
dado.append(valors)
valorfaltas = float(input(''))
dado.append(valorfaltas)
valorlad = float(input(''))
dado.append(valorlad)
print('O sálario final é', calculos(dado))
