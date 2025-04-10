def is_prime(n):
    if n < 2:
        return False
    if n == 2 or n == 3:
        return True
    if n % 2 == 0 or n % 3 == 0:
        return False
    i = 5
    while i * i <= n:
        if n % i == 0 or n % (i + 2) == 0:
            return False
        i += 6
    return True

def solve():
    import sys
    input_data = sys.stdin.read().strip().split()
    t = int(input_data[0])
    results = []
    index = 1
    for _ in range(t):
        x = int(input_data[index])
        k = int(input_data[index + 1])
        index += 2
        if k == 1:
            results.append("YES" if is_prime(x) else "NO")
        else:
            if x != 1:
                results.append("NO")
            else:
                if k <= 2:
                    results.append("YES")
                else:
                    results.append("NO")
    sys.stdout.write("\n".join(results))

if __name__ == '__main__':
    solve()