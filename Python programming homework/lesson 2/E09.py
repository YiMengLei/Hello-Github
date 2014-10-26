def code(string):
    b=""
    for ch in string:
        if ord(ch)>=ord('a') and ord(ch)<=ord('z'):
            char=chr(ord('a')+(ord(ch)-ord('a')+3)%26)
            b+=char
        if ord(ch)>=ord('A') and ord(ch)<=ord('Z'):
            char=chr(ord('A')+(ord(ch)-ord('A')+3)%26)
            b+=char
        if ord(ch)<ord('A') or (ord(ch)>ord('Z') and ord(ch)<ord('a')) or ord(ch)>ord('z'):
            b+=ch
    return b
    
def decode(string):
    b=""
    for ch in string:
        if (ord(ch)>=ord('d') and ord(ch)<=ord('z')) or (ord(ch)>=ord('D') and ord(ch)<=ord('Z')):
            char=chr(ord(ch)-3)
            b+=char
        if (ord(ch)>=ord('a') and ord(ch)<=ord('c')) or (ord(ch)>=ord('A') and ord(ch)<=ord('C')):
            char=chr(ord(ch)+23)
            b+=char
        if ord(ch)<ord('A') or (ord(ch)>ord('Z') and ord(ch)<ord('a')) or ord(ch)>ord('z'):
            b+=ch
    return b

inp=raw_input("Input full file name please:")
a=open(inp,'r')
string=a.read()

c=raw_input("DO YOU WANNA DECODE A FILE OR CODE IT?(A:CODE  B:DECODE)")
if c[0]=="A":
    b=code(string)
    w=open('code.txt','w')
    w.write(b)
    w.close()
if c[0]=="B":
    b=decode(string)
    w=open('decode.txt','w')
    w.write(b)
    w.close()
if c[0]!='A' and c[0]!='B':
    print "SORRY I CAN'T HELP YOU!!"
