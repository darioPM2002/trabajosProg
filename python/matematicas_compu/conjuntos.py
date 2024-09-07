A= {3,4,5,6,7,}
print(A)
B = {3,4,5,30}
print(B)
C = {3,7,5,10} #los conjutnos no tienen orden, no tienen indice
print(C)
l=[3,4,5,6,23,43,65]
print(l)
D= set(l)
print(D)#los conjutnos no tienen orden, no tienen indice
print(f"Cardinalidad de {A} es {len(A)}")
# comprobar si hay elementos en un conjunto
d= 11 in C
print(d)

#Operaciones con conjutos

###UNION
print(f"Union de {A} con {B}={A|B}")

###INTERSECCION
print(f"Interseccion {A} con {C} = {A&C}")

###Diferencia
print(f"diferencia {A} con {B} = {A-B}")

###Diferencia simétrica 
print(f"diferencia simétrica {A} con {B} = {(A-B)| (B-A)}")

###Comprobar si un conjunto es un subconjuto de otro
print(B.issubset(A))

#Subconjunto propio 
if (A.issubset(B) and A!=B):
    print("Subconjutno propio")
else:
    print("No es subconjutno propio")


U={3,4,5,7, 22,11,34,24}   
E= {4,5,7,8}

import sympy 
from sympy import FiniteSet
F = {7,8,9}
G = FiniteSet(3,4,5,7,8,1,2)
print(G)
H= FiniteSet(3,4,5,7,8,1,2)
print("Conjunto potencia:")
print (G.powerset())
print("Producto Cartesiano:")
print(f"Producto cartesiano {E} X {F}=")
P= G*H
for item in P:
    print(item, end=",")


print("Ejercicio")
print("")
print("")
u =[]
i = 0
while i < 41:
  u.append(i)
  i += 1
U = set(u)
A= {2,3,5,6,14,28,32}
B={0,1,3,5,16,17,21,28,30,31,32,33}
C= {1,2,4,5,8,9,10,16,18,24,28}

print(F"A interseccion B: {A&B}")
print(F"B union C: {A|B}")
print(F"A union B interseccion C: {A|(B&C)}")
print(F"B diferencia al universo interseccion C: {(U-B)&C}")
 
 