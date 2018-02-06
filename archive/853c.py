class flight:
    def __init__(self,day,a,d,cost):
        self.day = day
        self.a = a
        self.d = d
        self.cost = cost
    def __lt__(self,other):
        if self.day < other.day:
            return -1
        else:
            return 1
    def __repr__(self):
        return "day:%d, from:%d, to:%d, cost:%d" % (self.day, self.a, self.d, self.cost)
n = map(int,raw_input().split())
l = []
for i in xrange(n[1]):
    r = map(int,raw_input().split())
    a = flight(r[0],r[1],r[2],r[3])
    l.append(a)
l.sort()
for s in l:
    print s
