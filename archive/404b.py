a,d = map(float,raw_input().split())
n = input()
for i in xrange(1,n+1):
    c = int((i*d)/(4.0*a))
    l = float((i*d) - (c*4*a))
    if 0<=l<a:
        print "%.10f %.10f"%(l,0)
    elif a<=l<2*a:
        print "%.10f %.10f"%(a,l-(a))
    elif 2*a<=l<3*a:
        print "%.10f %.10f"%((3*a)-l,a)
    else:
        print "%.10f %.10f"%(0,(4*a)-l)


