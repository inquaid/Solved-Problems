def func(length):
    # print(lst)
    sum = 0
    for i in lst:
        sum += (i // length)
        
    return sum >= k

n, k = map(int, input().split())
lst = []
for i in range(n):
    temp = int(input())
    lst.append(temp)
    
# print(lst)
l = 0
r = 1e8

res = -1

while ((r - l) > (1e-7)):
    mid = l + (r - l) / 2
    if func(mid):
        res = max(res, mid)
        l = mid 
    else:
        r = mid
        
print(res)
    