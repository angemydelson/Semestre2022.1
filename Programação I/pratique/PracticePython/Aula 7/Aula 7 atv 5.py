N = int(input('Digite um valor: '))
div = 0
for i in range(2,N-1):
    if  N % i == 0:
        div += 1

if div == 0:
    print('Esse número é primo.')
    
else:  
    print('Esse número não é primo.')
    
print('Fim do programa')