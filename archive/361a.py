n,k = map(int,raw_input().split())
for i in xrange(n):
    for j in xrange(n):
        if i==j:
            print k,
        else:
            print 0,
    print '\n'
