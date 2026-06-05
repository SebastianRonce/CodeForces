"""
Entrada:
 - 4 enteros en una línea: las tres sumas de pares (a+b, a+c, b+c) y la suma total (a+b+c), en cualquier orden
Salida:
 - Tres enteros a, b, c (en cualquier orden)
Ejemplo:
Entrada:
20 7 10 13
Salida:
3 7 10
"""

numeros = list(map(int, input().split()))
total = []
mayor = max(numeros)
numeros.remove(max(numeros))
for i in numeros:
    j = mayor - i
    total.append(j)

print(*total, sep=' ')