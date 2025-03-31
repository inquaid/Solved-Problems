s = input()
s = s[0].upper() + s[1:]
s = s.replace('s', '$')
s = s.replace('i', '!')
s = s.replace('o', '()')
s = s + '.'
print(s)