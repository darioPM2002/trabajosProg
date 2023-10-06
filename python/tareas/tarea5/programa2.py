oracion = input("Ingrese oracion: ")



espacios =0
letras = 0

letrasInverasas=[]
numeroLetras = len(oracion)
oracionList = list((oracion.lower()))
oracionListInversa = []
listaVocales= []
listaConsonantes = []
numeros = 0

for i in oracionList:
    
    letras += 1
    if i == " ":
        espacios += 1
    if oracionList[letras-1] == "1"  or oracionList[letras-1] ==  "2" or oracionList[letras-1] == "3" or oracionList[letras-1] == "4" or oracionList[letras-1] == "5" or oracionList[letras-1] == "6" or oracionList[letras-1] == "7" or oracionList[letras-1] == "8" or oracionList[letras-1] == "9" or oracionList[letras-1] == "0":  
        numeros += 1
    else:    
        if oracionList[letras-1] == "a"  or oracionList[letras-1] ==  "e" or oracionList[letras-1] == "i" or oracionList[letras-1] == "o" or oracionList[letras-1] == "u":
            listaVocales.append(oracionList[letras-1])
        else:
            listaConsonantes.append(oracionList[letras-1])
        
    oracionListInversa.append(oracionList[numeroLetras-1])
    numeroLetras -= 1
   
print("tu oracion es la siguiente: ", oracion)
print("numero de caracteres:", letras)
print("numero de letras:", letras-espacios-numeros)
print("numero de espacios:", espacios)
print("numero total de numeros:", numeros)
print("lista vocales:", *listaVocales)
print("lista consonantes:", *listaConsonantes)
print("oracion orden inversa",*oracionListInversa)



