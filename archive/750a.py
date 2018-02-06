n=map(int,raw_input().split())
k=240-n[1]
sum = 0
count = 0
for x in range(1,n[0]+1):
    a=5*x
    if(sum + a <= k):
        sum = sum + a
        count=count+1
    else:
        break
print count
