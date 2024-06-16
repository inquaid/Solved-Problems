t = int(input())
for i in range(t):
    n = int(input())
    l = list(map(int, input().split()))
    l.sort()
    flag = 1
    if l[0] != l[1]:
        print('YES')
    else:
        for j in range(1, n):
            if l[j] % l[0] != 0:
                flag = 0
                break
        if flag == 1:
            print('NO')
        else:
            print('YES')
