n=map(int,raw_input().split())
# b = [int(s) for s in raw_input().split()]
b = map(int, raw_input().split())
b.sort()
k=0
for j in range(1,b[0]+1):
    flag=1
    for x in range(len(b)):
        if(b[x]%j!=0):
            if((b[x]-(b[x]/j)*j)>n[1]):
                flag=0
                break
    if(flag==1):
        c=j
    k=max(k,c)
print k
