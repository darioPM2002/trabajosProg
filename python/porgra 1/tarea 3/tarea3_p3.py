i = 0

primerFigStr =  ""
segundaFigStr=  ""
terceraFigStr=  ""
cuartaFigStr=   ""
filas = int(input("ingresar filas"))

#segunda gifura
espaciosint = filas


while(i <= filas):
    print(primerFigStr +"     "+str(segundaFigStr)+"     " + terceraFigStr+"     "+cuartaFigStr)
    #PRIMER FIGURA
    primerFigStr ="*" * filas

    #SEGUNDA FIGURA
    if(i == 0 or i == filas -1):
      segundaFigStr ="*" * filas
    else:
       segundaFigStr =str("*" + " " * (filas-2) +"*")
 
    
    #Tercera figura
    espacios =" " *  espaciosint
    asteriscos = "*" * (i+1)
    terceraFigStr=  str(espacios +asteriscos)
    
    #cuarta figura
    cuartaFigStr =terceraFigStr+ "*" * int(i-1)


    espaciosint = espaciosint -1
    i = i + 1 
    

    
   
