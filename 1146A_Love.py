"""
Entrada:
 - Una línea: cadena s (contiene al menos una 'a')
Salida:
 - Longitud máxima de una subcadena (obtenida borrando caracteres) tal que el número de 'a' sea > la mitad
Ejemplo:
Entrada:
aaabbb
Salida:
4
"""

s = input()
conta = 0
otro = 0

for i in s:
    if i == 'a':
        conta += 1
    else:
        otro += 1

while otro >= conta:
    otro -=1

print(conta+otro)