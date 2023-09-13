print("Este programa sirve para convertir grados celsuis a grados Fahrenheit y viceversa")
print("A continuación deberás ingresar los grados a calcular")

print("...")

celsius = float(input("Ingresa grados celsius"))

print("Dato ingresado:", celsius)

fahrenheit = float(input("Ingresa grados Fahrenheit")) 
32
print("Dato ingresado:", fahrenheit)

temperaturaFahrenheit = float((9/5.0) * celsius + 32)
temperaturaCelsius =  float((fahrenheit -32) * (5.0/9.0))

print("Calculando grados")
print("********")
print("****************")
print("************************")
print("********************************")


print("La temperatura en celsius es: " + str(celsius) + "° esto convertido a Fahrenheit es:", str(temperaturaFahrenheit) + "°")

print("La temperatura en fahrenheit es: " + str(fahrenheit) + "° esto convertido a celsius es:", str(temperaturaCelsius) + "°")
