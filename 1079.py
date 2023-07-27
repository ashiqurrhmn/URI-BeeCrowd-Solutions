n = int(input())
for i in range(1, n+1):
    a, b, c = map(float,input().split())
    avg = float((a*2)+(b*3)+(c*5))/10.0
    print(f"{avg:0.1f}")
