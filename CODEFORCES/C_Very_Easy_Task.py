def func(time_):
    time_ = time_ - 1
    return (n-1) <= (((time_ // x) + (time_ // y)) )

n, x, y = map(int, input().split())
l = 0
r = int(1e10)
# while func(r) == False:
#     r *= 2
res = -1
while l <= r:
    mid = l + ( r - l ) // 2
    if(func(mid)):
        res = mid
        r = mid - 1
    else:
        l = mid + 1
print(res + min(x, y) - 1)