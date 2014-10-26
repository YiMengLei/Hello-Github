##mile/英寸in
##meter-m/kilometer-km 90.3ft
str=raw_input("INPUT a Length with unit ended")
if str[-1] in ['E','e']:
    a=eval(str[0:-4])
    b=1.609344*a
    print "%f mile=%f km"%(a,b)
    
if str[-1] in ['N','n']:
    a=eval(str[0:-2])
    b=0.0254*a
    print "%f in=%f m"%(a,b)
    
if str[-2] in ['K','k']:
    a=eval(str[0:-2])
    print a
    b=0.62137119*a
    print "%f km=%f mile"%(a,b)   

else:
    a=eval(str[0:-1])
    b=39.370079*a
    print "%f m=%f in"%(a,b)   
