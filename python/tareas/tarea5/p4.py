import random
listaaleatorios =[]
numeroObjetosLista= 20
suma=0
#creacion lista
for i in range(numeroObjetosLista):
    numeroRandom = random.randint(1,100)
    listaaleatorios.append(numeroRandom)
    
for x in listaaleatorios:
    suma = suma+x


print("lista generada:",listaaleatorios)
resultado = suma /numeroObjetosLista
print("el promedio de esta lista es:",resultado)