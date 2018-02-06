import collections
n = input()
r = map(int,raw_input().split())
freq = collections.Counter(r)
sum1 = 0
for i in freq:
    if freq[i]>1:
        sum1 = sum1 + freq[i]-1
print sum1
check = [0 for i in xrange(n+1)]
x = 1
for i in xrange(len(r)):
    if freq[r[i]]>1:
        while(freq[x]!=0 and x<=n):
            x+=1
        if x<r[i] or check[r[i]] == 1:
            freq[r[i]] -= 1 
            r[i]=x
            freq[x] += 1
            check[x] = 1
    check[r[i]]=1
for i in xrange(len(r)):
    print r[i],





