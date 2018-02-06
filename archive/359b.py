n,k = map(int,raw_input().split())
for i in xrange(n):
    if k>0:
        print 2*i+2,2*i+1,
    else:
        print 2*i+1, 2*i+2,
    k=k-1
     

        

