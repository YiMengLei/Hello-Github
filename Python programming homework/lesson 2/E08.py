#replace "Cain" to "DAVID"
import re
import string
f1=open('holy_bible4.txt','r').read()
print "Origin File Contents"
print f1
f1.decode()
f1=re.sub('Cain','DAVID',f1)
print "After replace"
print f1
f_w=open('w.txt','w')
f1=f1.encode('utf-8')
f_w.write(f1)
f_w.close()

