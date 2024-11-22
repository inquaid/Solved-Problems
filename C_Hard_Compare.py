from math import log

a, b, c, d = list(map(float, input().split()))
# print(a,b,c,d)
if (b * log(a)) > (d * log(c)):
    print("YES")
else:
    print("NO")
