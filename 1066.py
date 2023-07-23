p = 0
ng = 0
e= 0
o = 0

for i in range(0, 5):
    n = int(input())
    if n > 0:
        p=p+1
    if n < 0:
        ng = ng+1
    if (n%2==0):
        e = e +1
    else:
        o = o+1

print(f"{e} valor(es) par(es)")
print(f"{o} valor(es) impar(es)")
print(f"{p} valor(es) positivo(s)")
print(f"{ng} valor(es) negativo(s)")
