def is_Lucky(num):
    num_str = str(num)
    for digit in num_str:
        if digit != '4' and digit != '7':
            return False
    return True

n=int(input())
for i in range(1,n+1):
    if is_Lucky(i) and n%i==0:
        print("YES")
        break
else:
    print("NO")