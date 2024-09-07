import random

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
#imprimir primera fila
def primerFila(matriz):
    print("primera fila:", *matriz[0])
    print("suma de la primera fila:", sum(matriz[0]))
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
    print("Suma diagonal principal:", sum(diagonalPrincipal))
    return diagonalPrincipal
#SECUNDARI diagonal
def secundariaDiagonal(matriz):
   diagonalSecundaria=[]
   b=len(matriz[0])
   for x in range(len(matriz)):
     for y in range(len(matriz[0])):
         if y == b-1:
             diagonalSecundaria.append(matriz[x][b-1],)

     b-=1   
   print("diagonal secundaria:", *diagonalSecundaria)
   print("suma de la diagonal secundaria:", sum(diagonalSecundaria))
   return diagonalSecundaria
#ultima columna
def ultimaColumna(matriz):

    b= len(matriz[0]) 
    ultimaColumn=[]
    for x in range(len(matriz)):
       for y in range(len(matriz[0])):
           if y ==b-1:
               ultimaColumn.append(matriz[x][y])
    print("ultima columna:", *ultimaColumn)
    print("la suma de la ultima columna es", sum(ultimaColumn))
    return ultimaColumn

#filas pares
def filasPares(matriz):
    print("Las filas pares son:")
    print("")
    resultado=0
    for x in range(len(matriz)):
    
      if (x+1) %2 == 0:
          print("filas pares",*matriz[x])
          resultado = resultado+sum(matriz[x])
    print("la suma de las filas pares es:", resultado)   
#columnas impares
def columnasImpares(matriz):
    resultado= 0
    print("columnas impares:" )
    for x in range(len(matriz)):
    
    
       for y in range(len(matriz[0])):
           if (y+1) %2 != 0:
               print(matriz[x][y], end= "  ")
               resultado = resultado+matriz[x][y]
       print("")  

    print("El resultado de la suma de las columnas impares es:", resultado)
#todas las filas
def todasFilas(matriz):
    resultado= 0
    print("todas las filas:" )
    for x in range(len(matriz)):
           print("fila numero",x+1,":" ,*matriz[x])
           resultado = resultado + sum(matriz[x])
    print("la suma de todas las filas es:", resultado )        
##todas las filas excepto primero y ultima
def filasMenosPyU(matriz):
  suma =0
  if len(matriz) > 2:
    print("todas las filas excepto primera y ultima:" )
    for x in range(len(matriz)):
            if (x) == 0 or (x) == len(matriz)-1:
                print("fila omitida xxxxxxxx")

            else:
                print(*matriz[x])   
                suma= suma+sum(matriz[x])
    print("La suma de estas filas es:", suma)              
  else:
      print("Error la matriz tiene que ser mínimo de 2x2 para no imprimir la primera y última fila")                          
##todos los elementos que no esten en el rango 1-5
def elementosNoRango1_5(matriz):
  elementosNo1_5=[]
  multiplos3= []
  noMultiplos3= []

  for x in range(len(matriz)):
      for y in range(len(matriz[0])):
  
          if not(matriz[x][y] >=1 and matriz[x][y] <=5):
              elementosNo1_5.append(matriz[x][y])
          if matriz[x][y] %3 ==0:
              multiplos3.append(matriz[x][y])
          else:    
              noMultiplos3.append(matriz[x][y])
  print("Los elementos que no estan en el rango 1-5 de la matiz son:", *elementosNo1_5)  
  print("Suma de los elementos que no estan en el rango 1-5 de la matiz es:", sum(elementosNo1_5) )           
  print("Los multiplos de 3 de la matriz son:", *multiplos3) 
  print("suma de los multiplos de 3 de la matriz es:", sum(multiplos3)) 
  print("Los NO multiplos de 3 de la matriz son:", *noMultiplos3) 
  print("Suma de los NO multiplos de 3 de la matriz es:", sum(noMultiplos3))
##columnas excepto antepenultima
def columnasExceAnte(matriz):
    suma=0
    if len(matriz[0]) >3:

        print("columnas excepto antepenultima:" )
        for x in range(len(matriz)):
           b= len(matriz)

           for y in range(len(matriz[0])):

               if y != b-3:
                   print(matriz[x][y], end= "  ")
                   suma = suma + matriz[x][y]
               else:
                   print("X", end= "  ")    
           print("")  

        print(" ")
                   

        print("suma de las columnas excepto la antepenultima:",suma)
    else:
        print("NO se pudo imprimir todas las columnas excepto la antepenultima por que la matriz tienen que ser mínimo de 4x4")    
def sumaTrianguloSuperior(matriz):
   diagonalPrincipal= sum(imprimirdiagonal(matriz))
   suma=0
   sumadiinferior=0
   for x in range(len(matriz)):
    for y in range(len(matriz[0])):
        
        if x < y:
           # x < y triangular superior
           #x>y trinagular inferior
           #x==y diagonal principal
           suma = suma + matriz[x][y]
         
        if x > y:
           sumadiinferior = sumadiinferior + matriz[x][y]   
   print("suma triangular superior de la matriz:", suma)
   print("suma triangular inferior de la matriz:", sumadiinferior)
   print("suma diagonal principal de la matriz y triangular superior:", diagonalPrincipal+suma)
   print("suma diagonal principal de la matriz y triangular inferior:", diagonalPrincipal+sumadiinferior)
   return suma

def funcionesMatrices():
    n= int(input("Hola, a continuación in gresa tu n que quieras para tu matriz:"))
    m= int(input("Hola, a continuación in gresa tu m que quieras para tu matriz:"))
    print("----------------------------------------------------------------")
    matriza=crearMatriz(n,m)
    impresionMatriz(matriza)
    imprimirdiagonal(matriza)
    primerFila(matriza)
    ultimaColumna(matriza)
    filasPares(matriza)
    columnasImpares(matriza)
    sumaTrianguloSuperior(matriza)
    todasFilas(matriza)
    filasMenosPyU(matriza)
    columnasExceAnte(matriza)
    secundariaDiagonal(matriza)
    elementosNoRango1_5(matriza)

    print("----------------------------------------------------------------")


funcionesMatrices()