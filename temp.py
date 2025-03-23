x = float(input())

l = 0.0
r = 1e18
while (r - l > 1e-6):
    mid = (r + l) / 2.0
    if (((mid ** 2) + (mid ** 0.5)) >= x):
        r = mid
    else:
        l = mid
print(r)        
