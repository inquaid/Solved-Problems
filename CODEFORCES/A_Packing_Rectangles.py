def check(my_size):
    minimum =  (my_size // w) * (my_size // h)
    return minimum >= n

w, h, n = map(int, input().split())

l = 0 
r = 1
while check(r) == False:
    r *= 2
res = r
while l <= r:
    mid = l + (r - l) // 2
    if check(mid):
       res = min(res,mid)
       r = mid - 1
    else:
        l = mid + 1
        
print(res) 