N = int(input('Digite a quantidade de aluno: '))
notas = 0
for i in range(N):
    for j in range(3):
        nota = float(input('Digite as notas: '))
        notas += nota
        print(notas)
        media = notas / 3
    print(media)
    if media > 6:
        print('Aprovado')
    else:
        print('Reprovado')
print('Fim')
