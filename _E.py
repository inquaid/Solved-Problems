import math

t = float(input())
while t >= 0:
    nicherTa = 1 + (2 * math.sqrt(2))
    constant = math.sqrt(7) / 6
    res = constant * (t / nicherTa) ** (3 / 2)
    # print((math.sqrt(7) / 6.0) * (t / (1 + (2 * math.sqrt(2)))) ** (3 / 2))
    print(f"{res:0.4f}")
    t = float(input())
