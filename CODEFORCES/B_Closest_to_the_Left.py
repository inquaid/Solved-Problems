n, k = map(int, input().split())

array = list(map(int, input().split()))
queries = list(map(int, input().split()))

for element in queries:
    l = 0
    r = n - 1
    res = -1
    while l <= r:
        mid = l + (r - l) // 2

        if array[mid] <= element:
            res = max(res, mid)
            l = mid + 1
        
        else:
            # res = max(res, mid)
            r = mid - 1

    print(res + 1 )
