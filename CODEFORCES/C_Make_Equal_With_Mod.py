t = int(input())
for i in range(t):
    n = int(input())
    lst = list(map(int, input().split()))
    if 1 not in lst:
        print("YES")
    else:
        lst.sort()
        f = True
        for j in range(n-1):
            if lst[j] + 1 == lst[j+1]:
                 print("NO")
                 f = False
                 break
        if f:
            print("YES")