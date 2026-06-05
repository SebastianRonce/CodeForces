"""
Entrada:
 - Primera línea: entero n (número de solicitudes)
 - Siguientes n líneas: nombres solicitados
Salida:
 - Para cada solicitud, imprime "OK" si el nombre no existía; si ya existe, imprime el nombre modificado (nombre+k)
Ejemplo:
Entrada:
4
first
first
second
first
Salida:
OK
first1
OK
first2
"""

n = int(input())

database = {}

for _ in range(n):

    nombre = input()

    if nombre not in database:
        database[nombre] = 1
        print("OK")

    else:
        print(nombre + str(database[nombre]))
        database[nombre] += 1

