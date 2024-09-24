import math
# (-b + sqrt(b^2 - 4ac)) / 2a
# (-b - sqrt(b^2 - 4ac)) / 2a
a, b, c = map(float, input().split())

discriminant = (b ** 2) - (4 * a * c)
lst = []
if a == 0:
    if b == c == 0:
        print(-1)
    elif b != 0:
        r1 = -c / b
        print(f"1\n{r1}")        
    else:
        print(0)
    
elif discriminant > 0:
    root = (-b + math.sqrt(discriminant)) / (2.0*a)
    root1 = (-b - math.sqrt(discriminant)) / (2.0*a)
    lst.append(root)
    lst.append(root1)
    lst.sort()
    print(f"2\n{lst[0]}\n{lst[1]}")
elif discriminant == 0:
    root3 = -b / (2*a) 
    print(f"1\n{root3}")
else:
    print(0)
