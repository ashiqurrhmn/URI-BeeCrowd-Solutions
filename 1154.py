sum = 0
c = 0
while(True):
    n = int(input())
    if n<0:
        break
    else:
        sum = sum + n
        c = c + 1
print(f"%0.2f" %(sum/c))
