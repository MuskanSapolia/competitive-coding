n,k = map(int,raw_input().split())
l= [0 for i in xrange(n)]
count=0
i = 1
if n<=k:
    print -1
else:         
    while(i<=n and count < k):
        l[i]=i+1
        count +=1
        i += 1
    print l
    if(i<=n-1):
        l[i]=1
        l[0]=n
        for j in xrange(i+1,n):
           l[j]=j
    else:
        l[0]=1
    for i in xrange(n):
        print l[i],
