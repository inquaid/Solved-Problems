a, b, x = list(map(int, input().split()))
cnt = 0
if a%x == 0:
    cnt+=1
print(int((b // x) - (a // x) + cnt))