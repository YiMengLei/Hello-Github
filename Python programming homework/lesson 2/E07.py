inp=raw_input("choose what you want input(A:character B:number C:Filename):")
if inp=='A':
    a=raw_input("input a character:")
    print "binary system:%s"%bin(ord(a))
    print "octopus system:%s"%oct(ord(a))
    print "sexadecimal system:%s"%hex(ord(a))
if inp=='B':
    a=raw_input("input a number in bin(0b~) or oct(0~) or hex(0x~):")
    if a[:2]=='0b':
        if int(a,2)<=32:
            print hex(int(a,2))
        else:
            print chr(int(a,2))
    if a[:2]=='0x':
        if int(a,16)<=32:
            print a
        else:
            print chr(int(a,16))
    if a[0]=='0'and a[1]!='b'and a[1]!='x':
        if int(a,8)<=32:
            print hex(int(a,8))
        else:
            print chr(int(a,8))
if inp=='C':
    f=raw_input("input a Filename:")
    a=open(f,'r')
    b=''
    string=a.read()
    for ch in string:
        b+=hex(ord(ch))
    w=open('w.txt','w')
    w.write(b)
    w.close()
    
