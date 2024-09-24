n, k = map(int, input().split())
array = list(map(int, input().split()))
queries = list(map(int, input().split()))

for element in queries:
    l = 0
    r = n - 1
    res = n
    while l <= r:
        mid = l + (r - l) // 2

        if element <= array[mid]:
            res = min(res, mid)
            r = mid - 1
        else:
            l = mid + 1
            
    print(res + 1)