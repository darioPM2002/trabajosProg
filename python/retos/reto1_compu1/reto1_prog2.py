


def impresionMatriz(matriz):
    for x in range(len(matriz)):

        for y in range(len(matriz[0])):
          print(matriz[x][y], end= "  ")
        print("")   

def diagonalPrin(matriz):
    diagonalPrincipal = []
    n=0
    for x in range(len(matriz)):
        for y in range(len(matriz[0])):
            if y == n:
                diagonalPrincipal.append(matriz[x][n],)

        n+=1   
    return sum(diagonalPrincipal)

def secundariaDiagonal(matriz):
   diagonalSecundaria=[]
   b=len(matriz[0])
   for x in range(len(matriz)):
     for y in range(len(matriz[0])):
         if y == b-1:
             diagonalSecundaria.append(matriz[x][b-1],)

     b-=1   
   return sum(diagonalSecundaria )   

def sumaColumnas(matriz):

    b= len(matriz[0]) 
    ultimaColumn=[]
    segundaColumna=[]
    primerColumna=[]
    for x in range(len(matriz)):
       for y in range(len(matriz[0])):
           if y ==b-1:
               ultimaColumn.append(matriz[x][y])
           elif y ==b-2:
               segundaColumna.append(matriz[x][y])
           elif y ==b-3:
               primerColumna.append(matriz[x][y])          

      
    return [sum(primerColumna), sum(segundaColumna),sum(ultimaColumn)]

def sumaFilas(matriz):
    ultimaFila=[]
    segundaFila=[]
    primerFila =[]
 
    for x in range(len(matriz)):
    
      if x == 0:
          primerFila=matriz[x]
      
      elif x == 1:
          segundaFila=matriz[x]
      
      elif x == 2:
          ultimaFila=matriz[x]        
    
    return [sum(primerFila), sum(segundaFila),sum(ultimaFila)]


def calcularCuadroMagico():
    #Pedir matriz a usuiario
    matriz=[
    [0,0,0],
    [0,0,0],
    [0,0,0]
    ]
    for x in range(len(matriz)):

        for y in range(len(matriz[0])):
          mensaje = x,y
          numeroUsuario= int(input("ingrese el numero de la posición "+ str(mensaje)+" de la matriz a continuación (unicamente NUMEROS, no ingreses valores vacios):"))
          matriz[x][y] = numeroUsuario

          impresionMatriz(matriz)
    #Pedir matriz a usuiario      
    sumadiagonalP= diagonalPrin(matriz)
    sumadiagonalS= secundariaDiagonal(matriz)
    sumaPcolumna= sumaColumnas(matriz)[0]
    sumaScolumna= sumaColumnas(matriz)[1]
    sumaTcolumna= sumaColumnas(matriz)[2]
    sumaPfila= sumaFilas(matriz)[0]
    sumaSfila= sumaFilas(matriz)[1]
    sumaTfila= sumaFilas(matriz)[2]

    if sumadiagonalP==sumadiagonalS==sumaPcolumna==sumaScolumna==sumaTcolumna==sumaPfila==sumaSfila==sumaTfila:
        print("------------------------------------------------")
        print("Felicidades tu cuadro SI es un cuadro mágico")
        impresionMatriz(matriz)
        print("------------------------------------------------")
    else:
        print("------------------------------------------------")
        print("Lo sentimos, tu cuadro NO es un cuadro mágico")
        impresionMatriz(matriz)
        respuesta= input("Quieres intentarlo de nuevo? (escribe SI/NO en mayusculas unicamente) ")
        print("------------------------------------------------")
        if respuesta=="SI":
            calcularCuadroMagico()
        else:
            print("Gracias, nos vemos pronto")
            return 0    


calcularCuadroMagico()