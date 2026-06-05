"""
Entrada:
 - Tres enteros: x a b (x = número de participantes, a = bolígrafos, b = cuadernos)
Salida:
 - "Yes" si a >= x y b >= x (puede dar al menos 1 de cada a cada participante), sino "No"
Ejemplo:
Entrada:
3 3 4
Salida:
Yes
"""

x, a, b = map(int,input().split())
if a - x >= 0 and b - x >= 0:
    print("Yes")
else:
    print("No")