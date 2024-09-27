import math

p = []

n = int(input())

for _ in range(n):
    p.append(list(map(int, input().split())))

s = set()

for l in p:
    s.add((l[0], l[1], 1))

cnt = 0

for i in range(n):
    for j in range(i + 1, n):
        x = (p[i][0] + p[j][0]) / 2
        y = (p[i][1] + p[j][1]) / 2

        if x.is_integer() and y.is_integer():
            if (x, y, 1) in s:
                cnt += 1

print(cnt)