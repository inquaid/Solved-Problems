x = int(input())

temp = 1
cnt = 1
while temp != x:
    temp *= cnt
    cnt += 1

print(cnt - 1)
