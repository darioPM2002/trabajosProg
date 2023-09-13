lineas= int(input("ingresar renglones"))
asteriscos = lineas
n =1
renglonString =""

while (n <= asteriscos):

    if (n ==1):
        renglonString=(" " * int(lineas -1)+ "*")
        print(renglonString)
        
    elif(n == asteriscos):
        renglonString=("*" * (int(asteriscos *2 )-1))
        print(renglonString)
   
    elif(not(n == lineas) or not(n ==1)):
        renglonString=(" " * int(lineas -1)+"*"+ " " * int(((n -1)*2 )-1 )+ "*")
        print(renglonString)
 

    
    n = n+1     
    lineas = lineas - 1