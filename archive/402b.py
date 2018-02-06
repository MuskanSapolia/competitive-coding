n,k = map(int,raw_input().split())
height = []
height1 = []
count = 0
height = map(int,raw_input().split())
height1.extend(height)
for i in xrange(1,len(height)):
    if height[i]-height[i-1] != k:
        height[i] = height[i-1]+k
        count += 1
print count
for i in xrange(1,len(height1)):
    if height1[i] - height1[i-1] != k:
        if height1[i]-height1[i-1]>k:
            print "- %d %d"%(i+1,height1[i]-(height1[i-1]+k))
            height1[i] = height1[i-1]+k
        else:
            print "+ %d %d"%(i+1,((height1[i-1]+k)-height1[i]))
            height1[i] = height1[i-1]+k
    
