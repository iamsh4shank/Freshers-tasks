from fractions import gcd
from functools import reduce
def lcm(a,b):
    return a*b//gcd(a,b)
testCases=input()
l=[]
r=1
for i in range(testCases):
    c=input()
    d=reduce(lcm,range(1,c+1))
    l.append(d)
for i in range(len(l)):
    print l[i]
