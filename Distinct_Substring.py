t = int(input())
for i in range(t):
    n, k = map(int, input().split())
    total_need = (k * (k + 1)) // 2 + (k - 1)
    if n >= total_need:
        print("YES")
    else:
        print("NO")
