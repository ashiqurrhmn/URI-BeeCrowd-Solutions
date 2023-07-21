d = int(input())
y = int(d / 365)
m = d - 365*y
m1 = int(m / 30)
d1 = m - 30*m1
print("%d ano(s)" %y)
print("%d mes(es)" %m1)
print(f"{d1} dia(s)")