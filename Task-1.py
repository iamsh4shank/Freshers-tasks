a=raw_input().split()
b=raw_input().split()
alices=0
bobs=0
for i in range(len(a)):
    if int(a[i])>int(b[i]):
        alices+=1
    if int(a[i])<int(b[i]):
        bobs+=1
print alices,bobs
