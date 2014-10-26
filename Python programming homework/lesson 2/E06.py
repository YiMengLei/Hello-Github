files= open("TXT.txt", "r+")
string=files.read()
b=''
print string[:-1]
for i in range(len(string)-1):
    b=b+string[-i-2]
print b

w=open('w.txt','w')
w.write(b)
w.close()
