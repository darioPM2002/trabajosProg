numero = int(input("Ingrese número de serie"))

print("conjetura de Collatz para el número",numero, "es:") 

while (numero>1):

    if (numero % 2 == 0):
        numero = int(numero / 2)
        print(numero) 
    else:
        numero= int(numero * 3 +1)
        print(numero) 
          
