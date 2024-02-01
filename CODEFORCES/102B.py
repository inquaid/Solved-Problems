from decimal import Decimal, getcontext
import sys
def sum_of_digits_large_number(number):
    getcontext().prec = 11000
    
    decimal_number = Decimal(number)
    
    number_str = str(decimal_number)
    
    digit_sum = sum(int(digit) for digit in number_str if digit.isdigit())
    
    return digit_sum

large_number = int(input())
    
if(large_number<10):
    print(0)
    sys.exit(0)
    
for i in range(1,8):
    result = sum_of_digits_large_number(large_number)
    if(result<10):
        print(i)
        break
    else: large_number = result

# print(result)
