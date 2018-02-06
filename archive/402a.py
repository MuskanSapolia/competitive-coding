k,a,b,v = map(int,raw_input().split())
boxes = 0
while a>0:
    if b>=k-1:
        a = a-k*v
        b = b-k+1
        boxes += 1
    elif b>0 and b<k:
        a = a-(b+1)*v
        b = 0
        boxes += 1
    else:
        a = a-v
        boxes += 1
print boxes
