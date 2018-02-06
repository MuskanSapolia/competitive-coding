n = input() 
a = list(raw_input())
for i in xrange(len(a)):
    if a[i] == '0': a[i] = -1
    else: a[i] = 1
psum = [0] * len(a)
psum[0] = a[0]
for i in xrange(1, len(a)):
    psum[i] = psum[i-1] + a[i]
psum = [0] + psum
ind = dict()
for i in xrange(len(psum)):
    ind[psum[i]] = i
max_len = 0
for i in xrange(len(psum)):
    cur_len = ind[psum[i]] - i
    max_len = max(max_len, cur_len)
print max_len
