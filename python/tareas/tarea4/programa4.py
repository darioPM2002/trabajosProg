numeroSerie= int(input("ingrese numero de elementos"))
resultado = 1
for i in range(1,numeroSerie):
    resultado = resultado + (1 / (i+1 ))
print (resultado)    