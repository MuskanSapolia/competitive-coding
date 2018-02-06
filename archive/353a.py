n = int(raw_input())
a=[]
sum1 = 0
sum2 =0 
for x in range(n):
    a.append(map(int, raw_input().split()))
    sum1 = sum1 + a[x][0]
    sum2 = sum2 + a[x][1]
# print "sum1: " , sum1
# print "sum2: " , sum2
if(sum1 % 2 == 0 and sum2 % 2 == 0):
    print 0
elif sum1 %2 and sum2 %2:
    count = 0
    for x in a:
        if sum(x) % 2:
            count = 1
            break
    print 1 if count else -1
else:
    print -1
