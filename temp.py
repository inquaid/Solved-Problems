from sympy import totient

print(totient(15))  # Output: 6



ary = [   4		
,19	
,34	
,49	
,64	
,79	
,94	
,109
,124
,139
,154
,169
,184
,199
,214]
st = set()
for i in range(1, 20):
    for elem in ary:
        if elem % i == 0:
            # print(i)
            st.add(i)
            
print(st)