n, k = map(int, input().split())

array = list(map(int , input().split()))
queries = list(map(int, input().split()))
# print(array[n-1])

for i in queries:
    l = 0
    r = n-1
    found = False
    while l <= r:
        mid = l + (r - l) // 2
        if array[mid] == i:
            print("YES")
            found = True
            break

        elif array[mid] < i:
            l = mid + 1
        
        else:
            r = mid - 1

    if not found:
        print("NO")


