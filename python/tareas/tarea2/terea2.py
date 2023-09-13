
e = 7
f = 8
g = 10
h = 12

print("------------------------")
print("variables originales")
print("e",e)
print("f",f)
print("g",g)
print("h",h)

f = f+e
e = f-e
f= f-e
g = g+h
h = g-h
g = g-h

print("------------------------")
print("Cambio de variables, nuevas variables:")
print("e",e)
print("f",f)
print("g",g)
print("h",h)





#----------------------------------------------------------------
#Solución alterna

print("------------------------")
print("Solución alterna")
a = 5
b = 10
c = 42
d = 24
print("------------------------")
print("variables originales")
print("a:",a)
print("b:",b)
print("c:",c)
print("d:",d)


b = (str(a) + str(b)+str(c)+ str(d) ) #
print (b)


a = int( b[1:3])  
c = int( b[3:5]) 	
d = int( b[5:7]) 
b = int( b [0] )


print("------------------------")
print("cambio de variables")
print("a:",a)
print("b:",b)
print("c:",c)
print("d:",d)

