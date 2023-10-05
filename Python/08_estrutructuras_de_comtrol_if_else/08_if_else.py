'''
Javier Rosales Martínez
2965139
javier.rosales@academicos.udg.mx
Ejemplos de if else
'''

if(True):
    print("Esto es un disparador")
    print("------------------------")

if(False):
    print("Esto numca seva a imprimir")
    print("------------------------")

if(1):
    print("Esto es un disparador")
    print("------------------------")

if(0):
    print("Esto numca seva a imprimir")
    print("------------------------")

print("\n")
entero = int(input("Dame un numero aleatorio: "))

if (entero < 100):
    print("El numero es 99 o menos")
    print("------------------------")

if (entero <= 100):
    print("El numero es 100 o menos")
    print("------------------------")

if (entero == 100):
    print("El numero es 100")
    print("------------------------")

if (entero != 100):
    print("El numero no es 100")
    print("------------------------")

if (entero >= 100):
    print("El numero es 100 o más")
    print("------------------------")

if (entero > 100):
    print("El numero es 101 o más")
    print("------------------------")

print("\n")
calificacion = int(input("Dame un nuemro aleatorio: "))

if (calificacion > 0 and calificacion < 60 ):
    print("La calificación es reprobatoria")
elif (calificacion >= 60 and calificacion <= 100):
    print("La calificación es aprobatoria")
else:
    print("La calificación es invalida")

print("\n")
letra = input("Dame una lera del abecedario: ")

if (letra >= 'A' and letra <='Z'):
    print("LA LETRA ES MAYUSCULA")
elif (letra >= 'a' and letra <='z'):
    print("LA LETRA ES MINUSCULA")
else:
    print("ERROR")

