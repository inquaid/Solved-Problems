from math import gcd
from math import log10
from math import floor
lst = list(map(int, input().split()))
# n = int(input())
n = lst[0]
count = 1
while n!=0:
    isNeg = False
    total = sum(lst) - n
    if total < 0:
        total = abs(total)
        isNeg = True
    # print(total / n)
    whole_number = total // n
    reminder = total - (n * whole_number)
    
    gcd_ = gcd(reminder, n)
    n =int( n / gcd_)    
    reminder = int( reminder / gcd_)
    # print(whole_number)
    # print(reminder)
    # print(n)
    a = whole_number
    b = reminder
    c = n
    # print(f"{a} {b} {c}")
    print(f"Case {count}:")
    if b == 0:
        if isNeg:
            print('-' , a)
        else:
            print(a)
    else:
        if a == 0:
            sizeofB = floor(log10(b)) + 1
            sizeofC = floor(log10(c)) + 1
            if isNeg:
                totalSize = max(sizeofB, sizeofC) + 2
                
                print(' ' * (totalSize - sizeofB), end='')
                print(b)
                
                print('-' , end=' ')
                print('-' * (totalSize - 2))
                
                print(' ' * (totalSize - sizeofC), end='')
                print(c)
            
            else:
                totalSize = max(sizeofB, sizeofC)
                
                print(' ' * (totalSize - sizeofB), end='')
                print(b)
                
                print('-' * (totalSize))
                
                print(' ' * (totalSize - sizeofC), end='')
                print(c)

        else:
            sizeofA = floor(log10(a)) + 1
            sizeofB = floor(log10(b)) + 1
            sizeofC = floor(log10(c)) + 1
            
            if isNeg:
                totalSize = max(sizeofA + sizeofB, sizeofA + sizeofC) + 2
                
                print(' ' * (totalSize - sizeofB), end='')
                print(b)
                
                print('-' , a , end='')
                print('-' * (totalSize - sizeofA - 2))
                
                print(' ' * (totalSize - sizeofC), end='')
                print(c)
            
            else:
                totalSize = max(sizeofA + sizeofB, sizeofA + sizeofC) 
                
                print(' ' * (totalSize - sizeofB), end='')
                print(b)
                
                print(a , end='')
                print('-' * (totalSize - sizeofA))
                
                print(' ' * (totalSize - sizeofC), end='')
                print(c)
                
        
    count += 1
    lst = list(map(int, input().split()))
    n = lst[0]
    # n = int(input())