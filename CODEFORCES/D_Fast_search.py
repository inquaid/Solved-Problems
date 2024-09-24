n = int(input())
array = list(map(int, input().split()))
array.sort()
q = int(input())

for i in range(q):
    leftSide, rightSide = map(int, input().split())
    
    l = 0
    r = n - 1
    left = n
    right = -1
    while l <= r:
        mid = l + (r - l) // 2
        if array[mid] >= leftSide:
            left = min(left, mid)
            r = mid - 1
        else:
            l = mid + 1

    l = 0
    r = n - 1
    while l <= r:
        mid = l + (r - l) // 2
        if array[mid] <= rightSide:
            right = max(right, mid)
            l = mid + 1
        else:
            r = mid - 1

    print(right - left + 1, end = " ")
    
        