Next round


a=raw_input().split()
for i in range(len(a[0])):
    c=raw_input().split()
count=0
for i in range(int(a[0])):
    if int(c[i])>=int(c[int(a[1])-1]) and c[i]!='0':
        count+=1    
print count
