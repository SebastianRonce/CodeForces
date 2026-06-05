"""
Entrada:
 - Primera línea: entero n (número de encuestados)
 - Segunda línea: cadena de longitud n compuesta por '0' y '1' ('1' = difícil)
Salida:
 - Imprime "HARD" si hay al menos un '1', en caso contrario "EASY"
Ejemplo:
Entrada:
3
101
Salida:
HARD
"""

n = int(input())
respuesta = 0
opinion = list(input().strip()) 
for i in range(len(opinion)):
    if opinion[i] == '1':
        respuesta = 1
        break
    else:
        respuesta = 0
if respuesta == 1:
    print("HARD")
else:
    print("EASY")