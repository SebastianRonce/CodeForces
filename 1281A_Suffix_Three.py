"""
Entrada:
 - Primera línea: entero n (número de palabras)
 - Siguientes n líneas: cada palabra representa una frase que termina en una partícula del idioma
Salida:
 - Para cada palabra, imprime:
   * FILIPINO si termina en "po"
   * JAPANESE si termina en "desu" o "masu"
   * KOREAN si termina en "mnida"
Ejemplo:
Entrada:
8
kamusta_po
genki_desu
ohayo_gozaimasu
annyeong_hashimnida
hajime_no_ippo
bensamu_no_sentou_houhou_ga_okama_kenpo
ang_halaman_doon_ay_sarisari_singkamasu
si_roy_mustang_ay_namamasu
Salida:
FILIPINO
JAPANESE
JAPANESE
KOREAN
FILIPINO
FILIPINO
JAPANESE
JAPANESE
"""

palabras = []
n = int(input())
for i in range(n):
    palabra = str(input())
    palabras.append(palabra)

for palabra in palabras:
    if palabra.endswith("po"):
        print("FILIPINO")
    elif palabra.endswith('desu') or palabra.endswith('masu'):
        print("JAPANESE")
    elif palabra.endswith('mnida'):
        print("KOREAN")