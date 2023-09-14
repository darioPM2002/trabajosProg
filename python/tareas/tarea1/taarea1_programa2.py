#VARIABLES
precio_unitario = 18
precio_antes_impuestos = 0
precio_final = 0
impuestos_compra = 0.16
articulos_comprar = int(input("Ingresa número de artículos a comprar"))

print("Vas a comprar: " + str(articulos_comprar), "artículos a un precio de " + str(precio_unitario)+"$" )


#CALCULOS
precio_antes_impuestos = articulos_comprar * precio_unitario
precio_final = precio_antes_impuestos + precio_antes_impuestos* impuestos_compra
("--------------------------------------------------------")
print("Precio antes de impuestos" ,str(precio_antes_impuestos) + "$")
print("--------------------------------------------------------")
print("calculando impuestos...")

print("Precio final después de impuestos" ,str(precio_final) + "$")

