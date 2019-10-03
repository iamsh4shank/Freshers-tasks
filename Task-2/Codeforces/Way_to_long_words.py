
#Way too long words


b=input()
l=[]
for i in range(b):
    l.append(raw_input())
for j in range(b):
    if len(l[j])>10:
        print l[j][0]+str(len(l[j])-2)+l[j][-1]
    else:
        print l[j]
