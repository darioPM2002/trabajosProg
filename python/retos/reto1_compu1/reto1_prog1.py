import random

#valores a elegir por usuario, x y
a= 7
b=6
matriz = []
diagonalPrincipal = []
diagonalSecundaria = []
ultimaColumn=[]
filasPares =[]

#Creacion de la matriz
for x in range(a):
    listaLit = []
    for y in range(b):
        dato = random.randint(1,100)
        listaLit.append(dato)
    matriz.append(listaLit)   
print(" ")
#impresion matriz
for x in range(a):

    for y in range(b):
      print(matriz[x][y], end= "  ")
    print("")   
print(" ")
#imprimir primera fila
print("primera fila:", matriz[0])

#primer diagonal
n=0
for x in range(a):
    for y in range(b):
        if y == n:
            diagonalPrincipal.append(matriz[x][n],)
            
    n+=1   
    
print("diagonal principal:", diagonalPrincipal)
print(" ")
#SECUNDARI diagonal
n=0
for x in range(a):
    for y in range(b):
        if y == n+1:
            diagonalSecundaria.append(matriz[x][n+1],)
            
    n+=1   
print("diagonal secundaria:", diagonalSecundaria)

print(" ")
#ultima columna
for x in range(a):
    for y in range(b):
        if y == b-1:
            ultimaColumn.append(matriz[x][b-1])
print("ultima columna:", ultimaColumn)
print(" ")
#filas pares
print("filas pares:" )
for x in range(a):
    
    if (x+1) %2 == 0:
        print(*matriz[x])
print(" ")       
#columnas impares
print("columnas impares:" )
for x in range(a):
    
    
    for y in range(b):
        if (y+1) %2 != 0:
            print(matriz[x][y], end= "  ")
    print("")  

print(" ")
#todas las filas
print("todas las filas:" )
for x in range(a):
        print(*matriz[x])
print(" ")        
#todas las filas excepto primero y ultima
print("todas las filas excepto primera y ultima:" )
for x in range(a):
        if (x) == 0 or (x) == a-1:
            print("fila omitida xxxxxxxx")
        
        else:
            print(*matriz[x])   
        