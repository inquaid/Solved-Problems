t = int(input())

for _ in range(t):
    n = int(input())
    res = 1
    lst = list(map(int, input().split()))
    for i in lst:
        res *= i
    cnt = 0
    while res % 10 == 0:
        cnt += 1
        res = res / 10
    
    print(cnt)