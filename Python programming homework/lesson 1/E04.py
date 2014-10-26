import random
c=raw_input("Enter a string(whose length is less than 100):")
D=len(c)
random.seed(6)
x=[]
y=[]
B=''
A=''
for i in range(D):
    x.append(random.randint(0,100))
a=0
while a<D:
    B=B+(chr(ord(c[a])^x[a]))
    a=a+1
print B

random.seed(6)
for i in range(D):
    y.append(random.randint(0,100))
for i in range(D):
    A=A+(chr(ord(B[i])^y[i]))
print A
