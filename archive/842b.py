n= map(int,raw_input().split())
r=n[0]
d=n[1]
count = 0
t=int(input())
for i in range(t):
    k= map(int,raw_input().split())
    x=k[0]
    y=k[1]
    c[k[2]
            if(((r-d<=x+c and x+c<=r)and(r-d<=y+c and y+c<=r))or((-r<=x+c and x+c<=d-r)and(-r<=y+c and y+c<=d-r))):
                    count = count + 1
print count 
