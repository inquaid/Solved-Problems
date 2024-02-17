import math

testcase = int(input())
for i in range(testcase):
    l, r = map(int, input().split())
    found = False
    for j in range(l, r + 1):
        temp = int(math.sqrt(j))
        for k in range(2, temp + 1):
            if j % k == 0:
                print(j - k, " ", k)
                found = True
                break
        if found:
            break
    if not found:
        print(-1)
