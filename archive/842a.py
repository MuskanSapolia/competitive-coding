n = map(int,raw_input().split())
l=n[0]
r=n[1]
x=n[2]
y=n[3]
k=n[4]
flag=1
for i in range(x,y+1):
    if(l<=k*i and r>=k*i):
        flag=0
        break
if(flag==0):
    print"YES"
else:
    print"NO"
    

