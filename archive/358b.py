n=int(input())
s=" "
s3=" "
for x in range(n):
    r=raw_input()
    s= s + r
s2=raw_input()
i=0
j=0
while i<len(s):
    if s[i]=='<':
        j=i+1
    while s[j]!='3' and 'a'<=s[j+1]<='z':
        j=j+1
        i=j+2
    s3=s3 + s[j+1]
    else:
        s3 = s3 + s[i]
        i=i+1
if(s!=s3):
    print "no"
else:
    print "yes"
