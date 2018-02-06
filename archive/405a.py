n = input()
l = map(int,raw_input().split())
i = len(l)-2
while i>=0:
    while l[i]>l[i+1]:
        j = i+1
        while l[i]>l[j] and j<len(l)-1:
            j+=1
        if j==len(l)-1 and l[j]<l[i]:
            l[j] += 1
        else:
            l[j-1] += 1
        l[i]-=1
    print l
    i-=1
print l

