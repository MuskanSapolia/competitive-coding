n=input()
d=0
'''
map(operation, iterator) => list
'''
for x in xrange(n):
    a, b, c = map(int, raw_input().split())
    if a+b+c>1:
        d=d+1
print d;  
