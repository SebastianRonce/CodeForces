"""
Entrada:
 - Una línea con una cadena (letras latinas)
Salida:
 - La cadena procesada: elimina vocales, inserta '.' antes de cada consonante y convierte a minúsculas
Ejemplo:
Entrada:
tour
Salida:
.t.r
"""

vocales = ['a', 'e', 'i', 'o', 'u', 'y']
palabra = input().lower()
new = ""
for i in palabra:
    if i not in vocales:
        new += "." + i
    
print(new)