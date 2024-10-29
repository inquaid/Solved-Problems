t = int(input())

for _ in range(t):
    n, H, M = list(map(int, input().split()))
    # print(f"{n} {H} {M}")
    time = H * 60 + M
    mn = 24 * 60

    for i in range(n):
        h, m = list(map(int, input().split()))
        temp = h * 60 + m
        # print(f"{temp} {time}")
        if temp >= time:
            mn = min(mn, temp - time)
        else:
            mn = min(mn, (24 * 60 - time) + temp)

    # print(mn)
    hours = mn // 60
    mins = mn % 60
    print(hours, mins)