import math
t = int(input())

for _ in range(t):
    n, k = map(int, input().split())
    # print(f'{n} {k}')
    if n < k or k == 1:
        print(n)
        continue
    if n == k:
        print(1)
        continue
    mn = math.floor(math.log(n, k))
    # print(mn)
    cnt = 0
    while n > 0 and mn >= 0:
        power = (k ** mn)
        cnt += ( n // power )
        n %= power
        # while n >= power:
        #     n -= power
            
        #     cnt += 1
        mn -=1
    if n > 0:
        cnt += n
    print(cnt)