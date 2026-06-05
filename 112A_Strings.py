"""
Entrada:
 - Dos líneas, cada una una cadena (pueden tener mayúsculas/minúsculas)
Salida:
 - Imprime -1 si la primera es lexicográficamente menor, 1 si es mayor, 0 si son iguales (ignorando mayúsculas)
Ejemplo:
Entrada:
aaa
bbb
Salida:
-1
"""

x = input().lower()  
y = input().lower()

if x < y:
    print(-1)
elif x > y:
    print(1)
else:
    print(0)