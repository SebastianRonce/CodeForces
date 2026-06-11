n = int(input())

for i in range(n):
    a = int(input())
    x = list(map(int, input().split()))
    contPar = 0
    contImpar = 0
    for i in x:
        if i % 2 == 0:
            contPar += 1
        else:
            contImpar += 1

    if contPar == 0:
        if a % 2 == 0:
            print("NO")
        else:
            print("YES")
    elif contImpar == 0:
        print("NO")
    else:
        print("YES")