give = list(map(int, input().split()))
a = give[0]
n = give[-1]
s = 0
for i in range(1, n+1):
    s = s+a
    a = a+1
print(s)