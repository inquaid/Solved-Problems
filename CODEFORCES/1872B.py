import math

testcase = int(input())
for i in range(testcase):
    result = 1e8
    n = int(input())
    for j in range(n):
        a, b = map(int, input().split())
        result = min(result, a + math.ceil(b / 2.0) - 1)
    print(result)
