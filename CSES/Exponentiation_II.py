m = 1_000_000_007
def bin_exp(a, b, m):
    res = 1
    while b > 0:
        if b & 1:
            res = res * a % m
        a = a * a % m
        b = b >> 1
    return res

t = int(input())

for _ in range(t):
    a, b, c = map(int, input().split())
    temp = bin_exp(b, c, m - 1)
    res = bin_exp(a, temp, m)
    print(res)
    # print(f'{a} {b} {c}')