with open(r'D:\\programs\\Solved-Problems\\LEETCODE\\_inputLeetCodeName.txt', 'r') as source_file:
    content = source_file.read()


content = content.replace('.', '_')
lst = list(content.split(' '))
strs = [s.capitalize() for s in lst]
refactoredName = ''.join(strs)

refactoredName = refactoredName.replace('\n','').replace('\r','')

with open('D:\\programs\\Solved-Problems\\LEETCODE\\_outputLeetCodeName.txt', 'w') as destination_file:
    destination_file.write(refactoredName)
    
directory = r'D:\\programs\\Solved-Problems\\LEETCODE\\'

file_path = directory + refactoredName + '.cpp'

with open(file_path, 'w') as file:
    file.write('// Your C++ code goes here\n')  
