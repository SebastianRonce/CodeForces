"""
Entrada:
 - Primera línea: entero n (longitud de la cadena)
 - Segunda línea: cadena de letras que forman palabras "zero" y "one" mezcladas (contiene 'z' para "zero" y 'n' para "one")
Salida:
 - Imprime los números reconstruidos (1 para cada "one" y 0 para cada "zero") en cualquier orden
Ejemplo:
Entrada:
4
zeno
Salida:
1 0
"""

x = int(input())
texto = str(input())
contZ = 0
contN = 0
for i in range(len(texto)):
    if texto[i] == 'n':
        contN += 1
    elif texto[i] == 'z':
        contZ += 1

for i in range(contN):
    print(1, end=' ')
for i in range(contZ):
    print(0, end=' ')