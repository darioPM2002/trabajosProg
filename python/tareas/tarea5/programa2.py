oracion = "hola como estas tu"

print("digit: ", oracion.isdigit)

espacios =0
letras = 0

letrasInverasas=[]
numeroLetras = len(oracion)
oracionList = list(oracion)
oracionListInversa = []
listaVocales= []
listaConsonantes = []


for i in oracion:
    
    letras += 1
    if i == " ":
        espacios += 1
    elif oracionList[numeroLetras-1] == "a"  or oracionList[numeroLetras-1] ==  "e" or oracionList[numeroLetras-1] == "i" or oracionList[numeroLetras-1] == "o" or oracionList[numeroLetras-1] == "u":
     
        listaVocales.append(oracionList[numeroLetras-1])   
  #  elif oracionList[numeroLetras-1] != "a"  or oracionList[numeroLetras-1] !=  "e" or oracionList[numeroLetras-1] != "i" or oracionList[numeroLetras-1] != "o" or oracionList[numeroLetras-1] != "u" or oracionList[numeroLetras-1] != " ":   
  #      listaConsonantes.append(oracionList[numeroLetras-1])    
    numeroLetras -= 1

print(oracionListInversa)
print("letras:", letras)
print("espacios:", espacios)
print("lista vocales:", listaVocales)
print("lista consonantes:", listaConsonantes)