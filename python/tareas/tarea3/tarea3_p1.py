imc = 0

peso = float(input("Ingresa tu peso, solo el número de kg"))
print("peso ingresado:", str(peso) + "kg")
altura = float(input("Ingresa tu altura, en unidades de metros"))
print("altura ingresada:", str(altura) + "mts")
imc = (peso)/(altura*altura)

print ("Tu indece de masa corporal es: ", str(imc), "y tienes:") 

if(imc < 18):
    print("Peso bajo. Necesario valorar signos de desnutrición")

if(imc >= 18 and imc <25):
    print("Peso normal")

if(imc >= 25 and imc <27):
    print("Sobrepeso")

if(imc >= 27 and imc <30):
    print("Obesidad gado 1, riesgo relativo alto para desarrollar enfermedades cardiovasculares")

if(imc >= 30 and imc <40):
    print("Obesidad grado 2, riesgo relativo muy alto para el desarrollo de enfermedades cardiovasculares")

if(imc >= 30 ):
    print("Obesidad grado 3 Extrema o Mórbida, riesgo relativo extremadamente alto para el desarrollo de enfermedades cardiovasculares")

