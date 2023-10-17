
def serieFibonacci(cantidad, i=1, SerieFib=[0,1]): 
    if cantidad == 0 or cantidad ==1:
        return 1
    else:
        numroNuevo = SerieFib[i-1] +  SerieFib[i]
        SerieFib.append(numroNuevo)
        print (numroNuevo)
        i+=1   
        return serieFibonacci(cantidad-1, i, SerieFib)   
        
serieFibonacci(10)