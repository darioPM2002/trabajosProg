import random

def crearMatriz(a,b):
   matriz = []
   for x in range(a):
       listaLit = []
       for y in range(b):
           dato = random.randint(1,5)
           listaLit.append(dato)
       matriz.append(listaLit)   
   print(" ")
   return matriz


#impresion matriz
def impresionMatriz(matriz):
   for x in range(len(matriz)):

       for y in range(len(matriz[0])):
         print(matriz[x][y], end= "  ")
       print("")   
   print(" ")



def sumaTrianguloSuperior(matriz):
   suma=0
   for x in range(len(matriz)):
    for y in range(len(matriz[0])):
        
        if x < y:
           # x < y triangular superior
           #x>y trinagular inferior
           #x==y diagonal principal
           suma = suma + matriz[x][y]
          
   return suma

elemtosMatriz= int(input("ingresa la longitud de la matriz"))
matriz =crearMatriz(elemtosMatriz, elemtosMatriz)
impresionMatriz(matriz)
resultado=sumaTrianguloSuperior(matriz)
print ("suma de triangular de la matriz:", resultado)
