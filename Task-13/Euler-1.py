a=input()
l=[]
for i in range(a):
    sum=0
    b=input()
    c=(b-1)/3
    d=(b-1)/5
    e=(b-1)/15
    sum= ((3+3*c)*c)/2 + ((5+5*d)*d)/2 -((15+15*e)*e)/2
    l.append(sum)
for i in range(len(l)):
    print l[i]
