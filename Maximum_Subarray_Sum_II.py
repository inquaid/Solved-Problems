n, a, b = map(int, input().split())
lst = list(map(int, input().split()))

prexSum = []
prexSum.append(lst[0])
# print(lst)
for i in range(1, n):
    prexSum.append(prexSum[i-1] + lst[i])
    
# print(lst)
# print(prexSum)

