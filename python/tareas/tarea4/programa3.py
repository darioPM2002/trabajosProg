lineas = int(input("ingrese numero de lineas"))
numeros = []
numeroActual = 1
print("Numero de linaas de la piramide", lineas)
if(lineas >=3):
    for i  in range(1,lineas+1):

        numeros = []
    
        for i in range(1,i+1):
            numeros.append(i )


        print(*numeros)
else:
    print("El programa no se pudo ejecutar ya que necesita como mínimo 3 lineas")        