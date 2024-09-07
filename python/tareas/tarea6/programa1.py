x=[ [True, False, True,("1","2","3",{"4":[5,6,7,8]})] ,9 ,10 , {"11":[12,[13,[14,15]]]} ]
#tupla ()
#lista []
#diccionario{}

n12= x[3]["11"][0]
n13= x[3]["11"][1][0]
n14= x[3]["11"][1][1][0]
n15 =x[3]["11"][1][1][1]

n1 =int(x[0][3][0])
n2=int(x[0][3][1])
n3 =int(x[0][3][2])

tuplanumeros= (n1,n2,n3)

n5 =x[0][3][3]["4"][0]
n6=x[0][3][3]["4"][1]
n7 =x[0][3][3]["4"][2]
n8 =x[0][3][3]["4"][3]

suma = n5+n6+n7+n8

print("numero 12:", n12)
print("numero 13:",n13)
print("numero 14:",n14)
print("numero 15:",n15)
print("numero 1:",n1)
print("numero 2:",n2)
print("numero 3:",n3)
print("tupla", tuplanumeros)
print("numero 5:",n5)
print("numero 6:",n6)
print("numero 7:",n7)
print("numero 8:",n8)
print("suma de numeros:",suma)




