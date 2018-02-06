from __future__ import print_function
n = raw_input()

vowel = lambda x: x=='a' or x == 'e' or x == 'i' or x == 'o' or x == 'u'

i = 0
k=0
while(i<len(n)-2):
    if not vowel(n[i]):
        if not vowel(n[i+1]):
            if not vowel(n[i+2]):
               if n[i+1] != n[i] or n[i+2] != n[i]:
                   for j in xrange(k,i+2):
                     print(n[j],end = "")
                   print(" ",end="")
                   i+=2
                   k = i
               else:
                   i+=1
            else:
               i+=1
        else:
            i+=2
    else:
        i+=1
if i<len(n):
    for j  in xrange(k,len(n)):
        print(n[j],end= "")
