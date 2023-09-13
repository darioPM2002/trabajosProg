import random

operacion =random.randint( 1,5)
simbolo = ""
numero = random.randint( 0,100)
numero2 = random.randint( 0,100)

#suma
operacion =random.randint( 1,5)


while operacion != 5:

    operacion =random.randint( 1,5)
    numero = random.randint( 1,100)
    numero2 = random.randint( 1,100)
    if operacion ==1:
        resultado =numero + numero2 
        print("El numero aleatorio fue:", operacion, "por lo que tuca sumar",numero,"+",numero2, "el resultado de esta operacion es:", resultado )
    if operacion ==2:
        resultado =numero - numero2 
        print("El numero aleatorio fue:", operacion, "por lo que toca restar",numero,"-",numero2, "el resultado de esta operacion es:", resultado )
    if operacion ==3:
        resultado =numero * numero2 
        print("El numero aleatorio fue:", operacion, "por lo que toca multiplicar",numero,"x",numero2, "el resultado de esta operacion es:", resultado )
    if operacion ==4:
        resultado =numero / numero2 
        print("El numero aleatorio fue:", operacion, "por lo que toca dividir",numero,"/",numero2, "el resultado de esta operacion es:", resultado )
if operacion ==5:

    print("El numero aleatorio fue:", operacion, "por lo cual tenemos que terminar el programa" )
