# Bit++


a=input()
l=[]
for i in range(a):
    l.append(raw_input())
c=0
for j in range(a):
    if (l[j][0])+(l[j][1])=='++' or l[j][1]+l[j][2]=='++':
        c+=1        
    else:
        c-=1        
print c
