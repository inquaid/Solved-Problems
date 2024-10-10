n = int(input())

lst = (list(map(int, input().split())))

res = 1e10

firstBound = (1 << n)

for i in range(firstBound):
    g1 = 0
    g2 = 0
    for j in range(n):
        if ( (i >> j) & 1 ):
            g1 += lst[j]
        else:
            g2 += lst[j]
    res = min(res, abs(g1 - g2))
    
print(res)
        