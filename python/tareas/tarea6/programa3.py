


def contadorPorpalabras(oracion):
    print("oracion:", oracion)
    oracion=oracion.split(" ")
    setoracion=set(oracion)


    def valoresunicosdiccionario (oracionVunicos ):
        key =0
        diccionarioValores= {}
        for i in oracionVunicos:
            diccionarioValores[oracion[key]]= 0
            key +=1

        return diccionarioValores    
    diccionario =valoresunicosdiccionario(setoracion)

    n= 0
    for x in oracion:
        if x == oracion[n]:
            diccionario[oracion[n]] =1+diccionario[oracion[n]]

            n+=1

 

    for i in setoracion:
         print("llave:", i, "----valor:",diccionario[i])
    
    print("----------------")       
    return diccionario       

    

def contadorPorLetras(oracionletras):
    oracion = oracionletras
    lista_oracion = []
    for letra in oracion:
        if letra not in lista_oracion:
            lista_oracion.append(letra)

    # Convertir la lista en una cadena nuevamente
    oracion_sin_duplicados = "".join(lista_oracion)
    print("oracion:", oracionletras)

    setoracion=oracion_sin_duplicados
    listaletrasUnicas=list(setoracion)
    def valoresunicosletras(oracionVunicos ):
        key =0
        diccionarioValores= {}
        for i in oracionVunicos:

            diccionarioValores[oracionVunicos[key]]= 0

            key +=1

        return diccionarioValores    
    diccionario =valoresunicosletras(listaletrasUnicas)
    n= 0
    for x in oracionletras:
        if x == oracionletras[n]:
            diccionario[oracionletras[n]] =1 + diccionario[oracionletras[n]]
            n+=1

    
    for i in  oracion_sin_duplicados:
         print("llave:", i, "----valor:",diccionario[i])

    print("----------------")     
    return diccionario   

contadorPorLetras("oracion sin letras")
contadorPorpalabras("oracion sin letras")