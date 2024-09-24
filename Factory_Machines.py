import math
def totalProd(max_time):
    product = 0
    for i in machines:
        product += (max_time // i)
        if product >= t:
            return True
        
    return product >= t

n, t = map(int, input().split())
machines = list(map(int, input().split()))
machines.sort()

l = 0
r = max(machines) * t
# while totalProd(r) == False:
#     r *= 2
res = r
while l <= r:
    mid = l + (r - l) // 2
    # total = totalProd(mid)
    if totalProd(mid):
        res = min(res, mid)
        r = mid - 1
    else:
        l = mid + 1
print(int(res))
    