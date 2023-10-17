import random


numeros = [
    random.randint(1,10),
    random.randint(1,10),
    random.randint(1,10),
    random.randint(1,10),
    random.randint(1,10),]

numerosDivision = [
    random.randint(1,10),
    random.randint(1,10),
    random.randint(1,10),
    random.randint(1,10),
    random.randint(1,10),]
numerosModificados = []
numerosResultadosDivision = []

print("lista de numeros aleatorios:",numeros)

for i in range(5):

   
    if numeros[i] % 2 == 0:
    
        numerosModificados.append(numeros[i]+2) 
    else:
         numerosModificados.append(numeros[i]) 

print("Lista de numeros con valorers pares modificados:",numerosModificados)

for i in range(5):
    print("Numero", numeros[i], "dividido entre:", numerosDivision[i])
    resultado = numeros[i] / numerosDivision[i]
    numerosResultadosDivision.append(round(resultado, 2))

print("lista numeros divididos alleatoriamente:",numerosResultadosDivision)    