import random
listaaleatorios =[]
numeroObjetosLista= 15
min = 0
max = 0



#creacion lista
for i in range(numeroObjetosLista):
    numeroRandom = random.randint(1,100)
    listaaleatorios.append(numeroRandom)


#Minimo y maximo
min = listaaleatorios[0]    
for x in listaaleatorios:
       if x < min:
           min = x
max = listaaleatorios[0]    
for z in listaaleatorios:
       if z > max:
           max = z

print("lista de numeros aleatorios:", *listaaleatorios)
print("numero mayor en la lista:",max)
print("numero menor en la lista:",min)