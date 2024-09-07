


def contadorPorpalabras(oracion):
    #diccionario para sumar numeros
    print("oracion:", oracion)
    oracion=oracion.split(" ") #[oracion, sin, letras]
    setoracion=set(oracion)

    def valoresunicosdiccionario (oracionVunicos ):
        key =0
        diccionarioValores= {}

        for i in oracionVunicos:#letras
            diccionarioValores[oracion[key]]= 0
            key +=1
        return diccionarioValores 
       

       
    diccionario =valoresunicosdiccionario(setoracion)
    #contador
    n= 0
    for x in oracion:
        if x == oracion[n]:
            diccionario[oracion[n]] =1+diccionario[oracion[n]]

            n+=1


    #imprime llave- valor
    for i in setoracion:
         "oracion"
         print("llave:", i, "----valor:",diccionario[i])
    
    print("----------------")       
    return diccionario       

    

def contadorPorLetras(oracionletras):
    oracion = oracionletras #lista con todas letras
    lista_oracion = [] #letras unicas/no se repiten

    for letra in oracion:
        if letra not in lista_oracion:
            lista_oracion.append(letra)
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
  
    #CONTADOR
    n= 0
    for x in oracionletras:
        if x == oracionletras[n]:
            diccionario[oracionletras[n]] =1 + diccionario[oracionletras[n]]
            n+=1

    

    for i in  oracion_sin_duplicados:
         
         print("llave:", i, "----valor:",diccionario[i])

    print("----------------")     
    return diccionario   

oracionUsuario= input("ingrese una oracíón")
contadorPorLetras(oracionUsuario)
contadorPorpalabras(oracionUsuario)