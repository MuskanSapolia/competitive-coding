class MyList:
    alist = []
    def __init__(self,n):
        self
        
    def __getitem__(self,index):
        return self.alist[index]
    def __setitem__(self,index,value):
        if type(value) == int:
            self.alist[index] = value
            return self.alist[index]
        else:
            raise TypeError("invalid datatype")
    def __lt__(self,other):
            return self<other
m = MyList(5)

