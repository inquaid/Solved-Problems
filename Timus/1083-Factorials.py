x,y = input().split()
x = int(x)
ln = len(y)
result = x
while x-ln > 0:
    result *= (x-ln)
    x-=ln
print(result)