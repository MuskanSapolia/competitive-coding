n = input()
flag =1
l =[1,2,3,7,8,9,4,5,45]
for i in xrange(len(l)):
    if l[i]==n:
        flag=0
        break
if flag == 0:    
    print "yes"
else:
    print "no"
    
