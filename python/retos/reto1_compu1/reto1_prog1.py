import random

#valores a elegir por usuario, x y
a=3
b=3
matriz = []

diagonalSecundaria = []

filasPares =[]
elementosNo1_5=[]
multiplos3= []
noMultiplos3= []

#Creacion de la matriz

def crearMatriz(a,b):
    matriz = []
    for x in range(a):
        listaLit = []
        for y in range(b):
            dato = random.randint(1,10)
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
#imprimir primera fila
def primerFila(matriz):
    print("primera fila:", matriz[0])
    return matriz[0]

#primer diagonal
def imprimirdiagonal(matriz):
    diagonalPrincipal = []
    n=0
    for x in range(len(matriz)):
        for y in range(len(matriz[0])):
            if y == n:
                diagonalPrincipal.append(matriz[x][n],)

        n+=1   
    
    print("diagonal principal:", *diagonalPrincipal)
    print(" ")
    return diagonalPrincipal
#SECUNDARI diagonal


#z=b
#for x in range(a):
#   for y in range(b):
#       if y == z-1:
#           diagonalSecundaria.append(matriz[x][b-1],)
#           
#   z-=1   
#print("diagonal secundaria:", diagonalSecundaria)

#print(" ")

##ultima columna
def ultimaColumna(matriz):
    ultimaColumn=[]
    for x in range(len(matriz)):
       for y in range(len(matriz[0])):
           if y == b-1:
               ultimaColumn.append(matriz[x][b-1])
    print("ultima columna:", *ultimaColumn)
    print(" ")
    return ultimaColumn

#filas pares
print("filas pares:" )
def filasPares(matriz):
    for x in range(len(matriza)):
    
      if (x+1) %2 == 0:
          print("filas pares",*matriz[x])
    print(" ")       
##columnas impares
#print("columnas impares:" )
#for x in range(a):
#    
#    
#    for y in range(b):
#        if (y+1) %2 != 0:
#            print(matriz[x][y], end= "  ")
#    print("")  
#
#print(" ")
##todas las filas
#print("todas las filas:" )
#for x in range(a):
#        print(*matriz[x])
#print(" ")        
##todas las filas excepto primero y ultima
#print("todas las filas excepto primera y ultima:" )
#for x in range(a):
#        if (x) == 0 or (x) == a-1:
#            print("fila omitida xxxxxxxx")
#        
#        else:
#            print(*matriz[x])   
#        
##todos los elementos que no esten en el rango 1-5
#
#for x in range(a):
#    for y in range(b):
#
#        if not(matriz[x][y] >=1 and matriz[x][y] <=5):
#            elementosNo1_5.append(matriz[x][y])
#        if matriz[x][y] %3 ==0:
#            multiplos3.append(matriz[x][y])
#        else:    
#            noMultiplos3.append(matriz[x][y])
#print("Los elementos que no estan en el rango 1-5 de la matiz son:", *elementosNo1_5)            
#print("Los multiplos de 3 de la matriz son:", *multiplos3) 
#print("Los NO multiplos de 3 de la matriz son:", *noMultiplos3) 
##columnas excepto antepenultima
#print("columnas excepto antepenultima:" )
#for x in range(a):
#    
#    
#    for y in range(b):
#
#        if y != b-3:
#            print(matriz[x][y], end= "  ")
#        else:
#            print("X", end= "  ")    
#    print("")  
#
#print(" ")
print("----------------------------------------------------------------")

matriza=crearMatriz(4,4)
impresionMatriz(matriza)
primerFila(matriza)
imprimirdiagonal(matriza)
ultimaColumna(matriza)
filasPares(matriza)