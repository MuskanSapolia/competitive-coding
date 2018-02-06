n=int(input())
p=map(int,raw_input().split())
flag=1
for x in range(0,n-1):
    for y in range(0,n-1):
        ma1 = max(p[x],p[x+1])
        ma2 = max(p[y],p[y+1])
        mi2 = min(p[y],p[y+1])
        mi1 = min(p[x],p[x+1])
        if((mi2<ma1 and ma1<ma2) and (mi2>mi1 and mi2<ma1)):
            flag = 0
            break
if(flag==1):
  print "no"
if(flag==0):
  print "yes"


