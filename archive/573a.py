n = input()
l = map(int,raw_input().split())
d = max(l)
flag=1
for i in l:
    if i!=d:
        if 2*i == d or 3*i == d:
            continue
        else:
            flag = 0
            break
    else:
        continue
if flag==0:
    print "No"
else:
    print "Yes"


