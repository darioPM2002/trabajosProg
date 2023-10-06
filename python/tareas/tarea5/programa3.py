import random
listaaleatorios =[]
numeroObjetosLista= 16

#creacion lista
for i in range(numeroObjetosLista):
    numeroRandom = random.randint(0,100)
    listaaleatorios.append(numeroRandom)
print(listaaleatorios)    

print(sorted(listaaleatorios))
print(listaaleatorios)