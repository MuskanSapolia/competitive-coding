a = input()
b = input()
while(a>0):
    if(b>a):
        r = a
        a = b%a
        b = r
    else:
        a = a%b
if a==0:
    print b
if a==1:
    print 1


