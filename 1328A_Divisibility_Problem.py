x = int(input())

for i in range(x):
    cont = 0
    a, b = map(int, input().split())
    if a % b == 0:
        print(0)
    else:
        print(b - (a % b))

# 1328A - Divisibility Problem
"""
Tienes dos enteros positivos a y b. En cada movimiento puedes aumentar a en 1 (reemplazar a con a+1). 
Tu tarea es encontrar el mínimo número de movimientos para que a sea divisible por b.
Es posible que necesites 0 movimientos si a ya es divisible por b.
Entrada:

Primera línea: número de casos de prueba t
2
Cada caso: dos enteros a y b en la misma línea
10 6
13 9
Salida:
1
5
"""