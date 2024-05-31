import math

def sum(n):
    return (n*(n+1))//2

t = int(input())
for i in range (t):
    n,x,y = map(int,input().split())
    cnt_sum = math.floor(n/x)
    cnt_min = math.floor(n/y)
    mn = math.gcd(cnt_sum,cnt_min)
    cnt_sum = cnt_sum - mn
    cnt_min = cnt_min - mn
    # print(cnt_sum,cnt_min)
    res = 0
    res = res + sum(n)
    res = res - sum(n-cnt_sum)
    res = res - sum(cnt_min)
    print(res)