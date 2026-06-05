
"""
Entrada:
 - Primera línea: carta sobre la mesa (dos caracteres, valor+palo, e.g. "AH")
 - Segunda línea: cinco cartas en la mano separadas por espacios (cada una valor+palo)
Salida:
 - "YES" si puedes jugar alguna carta (mismo valor o mismo palo), sino "NO"
Ejemplo:
Entrada:
AH
3D 4C 5H 6S 7D
Salida:
YES
"""

switch = 0
mesa = input()
mano = list(input().split())

for i in range(5):
    if mesa[0] == mano[i][0]:
        print("YES")
        switch = 1
        break
    elif mesa[1] == mano[i][1]:
        print("YES")
        switch = 1
        break

if switch == 0:
    print("NO")