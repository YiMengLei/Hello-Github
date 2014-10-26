print"Input N please:"
N=input()
if N>0:
    c=range(N )
    a=b=0
    for i in c:
        i+=1
        a+=i
    print "(1)'s answer is :%d" %a

    for i in c:
        i+=1
        if i%2==1:
            b+=i
    print"(2)'s answer is :%d"%b

else:
    print"Input WRONG!!!!!!!!!!!!!!!!!!"
