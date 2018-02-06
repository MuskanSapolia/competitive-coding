n= int(input())
alist = []
for x in range(n):
    alist.append(raw_input())
s="<3" +  "<3".join(alist)  + "<3"
print s
s1=raw_input()
j=0
for x in s1:
    if j == len(s):
        break
    if x == s[j]:
        j += 1

if(j==len(s)):
    print "yes"
else:
    print "no"

