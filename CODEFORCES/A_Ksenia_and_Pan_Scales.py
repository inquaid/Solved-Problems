def isEven(n):
    return n % 2 == 0


s = input()
s1, s2 = s.split("|")
s3 = input()


if len(s1) < len(s2) and len(s3) >= (len(s2) - len(s1)):
    need = len(s2) - len(s1)
    s1 = s1 + s3[:need]
    s3 = s3[need:]

if len(s2) < len(s1) and len(s3) >= (len(s2) - len(s1)):
    need = len(s1) - len(s2)
    s2 = s2 + s3[:need]
    s3 = s3[need:]

if len(s1) == len(s2) and isEven(len(s3)):
    print(s1 + s3[: len(s3) // 2] + "|" + s2 + s3[len(s3) // 2 :])
else:
    print("Impossible")
