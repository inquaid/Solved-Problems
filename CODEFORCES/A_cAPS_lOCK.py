def check(s1):
    if s1.isupper() or (len(s1) == 1 and s1.islower()):
        return s1.swapcase()
    if s1[1:].isupper():
        return s1.capitalize()
    return s1

print(check(input()))
