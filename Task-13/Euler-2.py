g=input()
l=[]
for i in range(g):

    n=input()
    a = 0
    b = 1 
    sum=0
    c=0
    while c<=n: 
         
        if c%2==0:
            sum+=c            
        
        c = a + b
        a = b 
        b = c
    l.append(sum) 
for i in range(len(l)):
    print l[i]    
        
        

