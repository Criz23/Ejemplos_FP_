personas = []

personas.append(["Juan", "Robles", "Pérez", 25, 1.73])

def agregar(personas):
    nombre = input("Nombre: ")
    apellido_paterno = input("Apellido Paterno: ")
    apellido_materno = input("Apellido Materno: ")
    edad = int(input("Edad: "))
    altura = float(input("Altura: "))

    personas.append([nombre, apellido_paterno, apellido_materno, edad, altura])

def mostrar(personas):
    for persona in personas:
        print("Nombre: ", persona[0])
        print("Apellido Parteno: ", persona[1])
        print("Apellido Materno: ", persona[2])
        print("Eddad: ", persona[2])
        print("Altura: ", persona[4])
        print("***************************")

def buscar(personas):
    nombre = input("Nombre: ")
    for persona in personas:
        if persona[0] == nombre:
            print("Nombre: ", persona[0])
            print("Apellido Parteno: ", persona[1])
            print("Apellido Materno: ", persona[2])
            print("Eddad: ", persona[2])
            print("Altura: ", persona[4])
            print("***************************")
            break
    else:
        print("No se encontró a la persona")

def modificar(personas):
    nombre = input("Nombre: ")
    for persona in personas:
        if persona[0] == nombre:
            nombre = input("Nombre: ")
            apellido_paterno = input("Apellido Paterno: ")
            apellido_materno = input("Apellido Materno: ")
            edad = int(input("Edad: "))
            altura = float(input("Altura: "))

            persona[0] = nombre
            persona[1] = apellido_paterno
            persona[2] = apellido_materno
            persona[3] = edad
            persona[4] = altura
            break
    else:
        print("No se encontró a la persona")

def eliminar(personas):
    nombre = input("Nombre: ")
    for persona in personas:
        if persona[0] == nombre:
            personas.remove(persona)
            break
    else:
        print("No se encontró a la persona")

def menu():
    print("1.- Agregar")
    print("2.- Mostrar")
    print("3.- Buscar")
    print("4.- Modificar")
    print("5.- Eliminar")
    print("6.- Salir")
    opcion = int(input("Opción: "))
    return opcion

while True:
    opcion = menu()
    if opcion == 1:
        agregar(personas)
    elif opcion == 2:
        mostrar(personas)
    elif opcion == 3:
        buscar(personas)
    elif opcion == 4:
        modificar(personas)
    elif opcion == 5:
        eliminar(personas)
    elif opcion == 6:
        break
    else:
        print("Opción no válida")
