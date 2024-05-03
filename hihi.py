def cost(r, l):
    return abs(r - l) + 1

def solve():
    s = input().strip()
    result = 0
    n = len(s)
    
    last = n - 1
    while last >= 0 and s[last] == '1':
        last -= 1
    
    i = 0
    while i <= last:
        if s[i] == '1':
            j = i
            while j <= last and s[j] == '1':
                j += 1
            if j <= last:
                result += cost(i, j)
                s = s[:j] + '1' + s[j+1:]
        i += 1
    
    print(result)

def main():
    t = int(input())
    for _ in range(t):
        solve()

if __name__ == "__main__":
    main()
