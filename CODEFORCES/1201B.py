n = int(input())
sm = 0
mx = 0
temp = list(map(int, input().split()))
for i in range(n):
    sm = sm + temp[i]
    mx = max(mx, temp[i])
if sm % 2 == 0 and 2 * mx <= sm:
    print("YES")
else:
    print("NO")
