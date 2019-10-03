#Football





a=raw_input()
flag=0
for i in range(len(a)-6):
    if a[i]==a[i+1]==a[i+2]==a[i+3]==a[i+4]==a[i+5]==a[i+6]=='0' or a[i]==a[i+1]==a[i+2]==a[i+3]==a[i+4]==a[i+5]==a[i+6]=='1':
       print 'YES'
       flag=1
       break
if flag==0:
    print 'NO'
