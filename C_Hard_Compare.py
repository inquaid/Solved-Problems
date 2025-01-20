import math

def posibble(s1, s2, n):
    

s = input()
n = len(s)
k = math.ceil(n / 2.0)
if(n&1 == 0):
    k += 1
# print(n)
f = True
for i in range(k, n):
    # print(i)
    if s[1:].count(s[:i]) == 1:
        print("YES")
        print(s[:i])
        f = False
        break
    
if f:
    print("NO")