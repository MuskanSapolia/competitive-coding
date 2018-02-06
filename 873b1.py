n  = input()
l = map(int,raw_input())
for i in xrange(len(l)):
    if l[i]==0:
        l[i]=-1
ind = dict()
for i in xrange(1,len(l)):
    l[i] = l[i-1]+l[i]
l =[0]+l
for i in xrange(0,len(l)):
    ind[l[i]] = i
max1=0
for i in xrange(len(l)):
    if ind[l[i]]-i>max1:
        max1 = ind[l[i]]-i

print max1
