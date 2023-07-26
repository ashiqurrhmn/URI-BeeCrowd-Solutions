while(True):
    a, b = map(int, input().split())
    x = min(a, b)
    y = max(a, b)
    if a<=0 or b<=0:
        break
    else:
        result = []
        for i in range(x, y+1):
            result.append(i)
            final = ' '.join(map(str, result))
    print(f"{final} Sum={sum(result)}")



