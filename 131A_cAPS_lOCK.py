texto = str(input())

if texto.isupper():
    texto = texto.lower()
    print(texto)
elif (texto[0].islower() and texto[1:].isupper()) or (len(texto) == 1):
    texto = texto[0].upper() + texto[1:].lower()
    print(texto)
else:
    print(texto)
# ENUNCIADO
"""
Problema: Bloqueo de mayúsculas accidental

En algunos casos, una palabra se escribe con la tecla de bloqueo de mayúsculas (Caps Lock) activada por error.
Queremos detectar cuando la palabra cumple una de estas condiciones:

* Todas las letras son mayúsculas.
* Todas las letras, excepto la primera, son mayúsculas.

Si se cumple alguna de estas condiciones, se debe corregir la palabra cambiando el caso de todas las letras.
Ejemplos:
* "hELLO" debe convertirse en "Hello".
* "HTTP" debe convertirse en "http".
* "z" debe convertirse en "Z".

Si la palabra no cumple ninguna de las condiciones, se debe imprimir tal cual como se recibió.

Entrada
La primera línea contiene una palabra formada por letras latinas mayúsculas y minúsculas.
La longitud de la palabra está entre 1 y 100 caracteres, inclusive.

Salida
Imprime la palabra después de aplicar la regla de corrección.

Ejemplos
Entrada:
```
cAPS
```
Salida:
```
Caps
```

Entrada:
```
Cerradura
```
Salida:
```
Cerradura
```
"""