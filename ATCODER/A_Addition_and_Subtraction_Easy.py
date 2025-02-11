str = input()
a, op, b = str.split(' ')
if op == "+":
    print(int(a) + int(b))
else:
    print(int(a) - int(b))