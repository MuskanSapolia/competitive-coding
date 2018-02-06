n = input()
l = map(int,raw_input().split())
l.sort()
if l[n-1]<=25:
    print 0
else:
    print l[n-1]-25
