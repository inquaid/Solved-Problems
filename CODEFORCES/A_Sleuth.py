s = input()
s = s.replace(' ', '')
vowel = 'aeiouy'
s = s.lower()
while s[-1].isalpha() is False:
    s= s[:-1]
# print(s[-1])
if s[-1] in vowel:
    print('YES')
else:
    print('NO')