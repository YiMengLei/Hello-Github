#descern wether it is a leap year
year=eval(raw_input("Input a year number:"))
if (year%4==0 and year%100!=0) or year%400==0:
    print 'This year is a leap year!'
else:
    print'This year is a normal year'
