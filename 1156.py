s = 1
a = 2
for i in range(3, 40, 2):
    s = s + i/a
    a = a*2
print(f"%0.2f" %s)