import math as m
import string
S=string.split(raw_input('Please input 3 num for a equation(seperate with a space):'))
a=eval(S[0])
b=eval(S[1])
c=eval(S[2])

print a,b,c
if a<0:
    print 'Wrong input'
else:
    det=b*b-4*a*c
    if det ==0:
        print 'Two same real root:%f'%(-b/(2*a))
    elif det>0:
        x1=(-b+m.sqrt(det))/(2*a)
        x2=(-b-m.sqrt(det))/(2*a)
        print 'Two different real roots:%f,%f'%(x1,x2)
    else:
        real=-b/(2*a)
        im=m.sqrt(-det)/(2*a)
        print 'Two com roots:%f+i%f,%f+i%f'%(real,im,real,im)
    
