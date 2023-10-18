import random

import random

def ordenar_recursivamente(listaRandom):
    if len(listaRandom) <= 1:
        return listaRandom 
    elementominimo = min(listaRandom)

    
    nueva_lista = [x for x in listaRandom if x != elementominimo]

    return [elementominimo] + ordenar_recursivamente(nueva_lista)

n = int(input("ingresa numero de elementos de la lista"))
crearListaAleatoria = [random.randint(1, 100) for _ in range(n)]
listaOrdenada = ordenar_recursivamente(crearListaAleatoria)


print("Lista original:", crearListaAleatoria)
print("Lista ordenada:", listaOrdenada)