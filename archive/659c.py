n=map(int,raw_input().split())
money=n[1]
toys=n[0]
l=map(int,raw_input().split())
myset= set(l)
cost = 0
count = 0
newset = set()
r=1e9 + 1
s=int(r)
for i in xrange(1,s):
    if i not in myset:
        if (cost + i) <= money:
            count += 1
            newset.add(i)
            cost = cost + i
        else:
            break

print count
print " ".join(str(x) for x in newset)
