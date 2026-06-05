"""
Entrada:
 - Primera línea: entero n (número de piedras)
 - Segunda línea: cadena de longitud n con letras que representan colores (por ejemplo 'RGB')
Salida:
 - Entero: número mínimo de piedras a remover para que no haya dos adyacentes del mismo color
Ejemplo:
Entrada:
3
RGB
Salida:
0
"""

n = int(input())
color = list(input())
contador = 0
for i in range(n-1):
    if color[i] == color[i+1]:
        contador += 1
print(contador)
