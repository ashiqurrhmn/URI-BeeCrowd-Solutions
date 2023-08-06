while(True):
    x = int(input())
    sum = 0
    if x==0:
        break
    elif x%2==0:
        for i in range(1, 6):
            sum = sum + x
            x = x+2
        print(sum)
    else:
        a = x+1
        for i in range(1, 6):
            sum = sum + a
            a = a+2
        print(sum)

