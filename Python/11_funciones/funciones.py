entero = 10 #Variable global

def imprimir():
    entero_local = 10
    print("hola mundo python")
    print("Variable global _ funcion: ", entero)
    print("Variable local: ", entero_local)
    if (entero < 100):
        entero_local = 200
    return entero_local


print("Variable global _ : ", entero)
print()
#print("Variable local _ : ", entero_local)
print()
print(imprimir())