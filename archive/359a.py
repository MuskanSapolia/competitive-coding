r,c = map(int,raw_input().split())
mat = [[0]*(c+1) for x in xrange(r+1)]
for i in xrange(1,r+1):
    k = map(int,raw_input().split())
    for j in xrange(len(k)):
        mat[i][j+1] = k[j]
count=0
corner=0
for i in xrange(1,r+1):
    for j in xrange(1,c+1):
        if(mat[i][j]==1):
             count+=1
             if i==1 or i==r or j==1 or j==c:
                 corner +=1
if corner>=1:
    print 2
else:
    print 4
