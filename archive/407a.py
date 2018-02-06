i=lambda:map(int,raw_input().split())
n=input()
i()
S=[]
exec("s=i();c=sum(s)*5+len(s)*15;S.append(c);"*n)
print min(S)
