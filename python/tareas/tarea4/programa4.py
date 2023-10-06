numeroSerie= int(input("ingrese numero de elementos"))
resultado = 1
resultadoN= 1
print("n =", resultado, "= 1/",resultado, "=", 1)
for i in range(1,numeroSerie):
    
    resultadoN= 1 / (i+1 )
    print("n =", i, "= 1/",i+1, "=", round(resultadoN, 2))
    
    resultado = resultado + (1 / (i+1 ))
print("El resultado de la suma de la secuencia es =", round(resultado, 2))    