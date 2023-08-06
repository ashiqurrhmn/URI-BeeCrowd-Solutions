n = int(input())
for i in range(1, n+1):
    x, y=map(int, input().split())
    sum = 0
    if x%2==0:
        a = x+1
        for j in range(1, y+1):
            sum = sum + a
            a = a+2
        print(sum)
    else:
        for j in range(1, y+1):
            sum = sum + x
            x = x+2
        print(sum)
