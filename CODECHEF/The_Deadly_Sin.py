def res(a, b):
    if a == b or a == 0 or b == 0:
        print(a + b)
        return
    if a % b == 0:
        print(b * 2)
        return
    if b % a == 0:
        print(a * 2)
        return
    res(a % b, b % a)


def main():
    t = int(input())
    for i in range(t):
        a, b = map(int, input().split())
        res(a, b)


if __name__ == '__main__':
    main()
