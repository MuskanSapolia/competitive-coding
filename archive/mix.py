while True:
    try:
        n = input()
    except EOFError:
        break
    smoke =[[10**10 for i in xrange(n)]for j in xrange(n)]
    s = map(int,raw_input().split())
    list1 = [0 for i in xrange(len(s))]
    list1[0] = s[0]
    for x in xrange(1,len(s)):
        list1[x] = s[x] + list1[x-1]
    for l in xrange(1,n+1):
        for i in xrange(n):
            j = i+l-1
            if i ==j:
                smoke[i][j] = 0
            if j>= n:
                continue
            for k in xrange(i,j):
                sum1 = (list1[k] - (list1[i-1] if i>0 else 0)) % 100 
                sum2 = (list1[j]-list1[k]) % 100
                # sum1 = sum(list1[i:k+1])
                # sum2 = sum(list
                res =smoke[i][k] + smoke[k+1][j] + sum1*sum2
                if res<smoke[i][j]:
                    smoke[i][j] = res
    print smoke[0][n-1]


