
def serieFibonacci2(cantidad): 

    if cantidad == 0:
        return []
    elif cantidad == 1:
        return [0]
    elif cantidad ==2:
        return [0,1]  
    else:
        numeros= serieFibonacci2(cantidad-1)
        numeros.append(numeros[-1]+numeros[-2])
        return numeros
    
n = int(input("Ingresa cuantos elementos de la serie de fibonacci quieres que calcule el programa:"))
print("Este es el resultado:")
print(*serieFibonacci2(n))