import math
def func(x):
    return x == (( c - (x ** 2) ) ** 2)
    # return (x ** 2) + math.sqrt(x)

c = float(input())
# print(c ** c)
l = 0.0
r = 1e18

while (r - l) > 1e-6:
    mid = l + (r - l) / 2.0
    __c = mid ** 2 + math.sqrt(mid)    
    
    if __c <= c:
        l = mid 
    else:
        r = mid 
        
# print(func(x))
print(l)