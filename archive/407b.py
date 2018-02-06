import collections
color = raw_input()
garland = raw_input()
freq1 = collections.Counter(color)
freq2 = collections.Counter(garland)
sum1 = 0
for x in freq2:
    if freq1[x]==0:
        sum1 = -1
if sum1 != -1:
    for x in freq2:
        sum1 = sum1 + min(freq1[x],freq2[x])
print sum1



