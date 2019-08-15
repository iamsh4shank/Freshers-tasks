#Time conversion

general=raw_input()
if general[0]+general[1]=='12' and general[8]=='P' :
    print '0'+general[0]+general[1]+general[2]+general[3]+general[4]+general[5]+general[6]+general[7]
    
if general[0]+general[1]=='12' and general[8]=='A' :
    military1=int(general[0]+general[1])-12
    print '0'+str(military1)+general[2]+general[3]+general[4]+general[5]+general[6]+general[7]
    
if general[8]=='P' and general[0]+general[1]!='12':
    military1=int(general[0]+general[1])+12
    print str(military1)+general[2]+general[3]+general[4]+general[5]+general[6]+general[7]
    
if general[8]=='A' and general[0]+general[1]!='12':
    print general[0]+general[1]+general[2]+general[3]+general[4]+general[5]+general[6]+general[7]    
