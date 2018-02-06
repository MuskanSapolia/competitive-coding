n = input()
s = raw_input()
for i in xrange(len(s)):
    if s[i]=='L':
        j = i-1
        while j >=0:
            s[j] = 'L'
            j-=1
    if s[i] == 'R':
        j = i+1
        while s[j]!='L' and j<len(s):
            j+=1
        if s[j] == 'L':
            l = j-i+1
            mid = (i+j)/2
            for x in xrange(i+1,mid+1):
                s[x] = 'R'
            for x in xrange(mid+1,j):
                s[x] = 'L'
            if l%2 != 0:
                s[mid] = '.'
        else:
            for x in xrange(i+1,len(s)):
                s[x] = 'R'
count = 0
for i in xrange(len(s)):
    if s[i] == '.':
        count +=1
print count
