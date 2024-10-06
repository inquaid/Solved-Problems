t = int(input())
for _ in range(t):
    b, c, d = map(int, input().split())
    if (b&(~c)&(~d)) | ((~b)&c&d):
        print(-1)
    else:
        print(c^d)