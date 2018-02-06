n = input()
l = []
count = 0
l = map(int,raw_input().split())
max = 0
for i in l:
        if i>max:
                    max = i
                    for i in l:
                            if i==max:
                                        count = count+1
                                        print count
