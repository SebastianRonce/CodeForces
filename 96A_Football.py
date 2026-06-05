"""
Entrada:
 - Una línea: cadena de '0' y '1' que describe posiciones de jugadores
Salida:
 - "YES" si existen al menos siete caracteres iguales consecutivos, sino "NO"
Ejemplo:
Entrada:
0000000
Salida:
YES
"""

x = list(input())
contador = 1

for i in range(len(x)-1):
    if contador == 7:
        break
    if x[i] == x[i+1]:
        contador += 1
    else:
        contador = 1

if contador < 7:
    print("NO")
else:
    print("YES")