'''
NAME:-KAUSHAL SUNIL SONJE
ROLL_NO:-63
BATCH_NO:-S4
'''
table,tableq={},{}
total,totalq=0,0
def create(size):     #creating hash table
    for i in range(size):
        table[i]=None   # initialising by none
        tableq[i]=None
def linear(key,size):
    global total
    hash=key%size   # hash function
    flag=0
    if(table[hash]==None):
        table[hash]=key
    else:
        for i in range(0,size-1):
            hash=(key+i)%size       #linear hash probing
            if(table[hash]==None):
                table[hash]=key
               # flag=+1
                break
    total+=1
#    print("?",total)
    
def linear_search(key,size):
    hash=key%size
    flag=0
    if(table[hash]==None):
        print("key:-",key, "is not present..")
    else:
        for i in range(0,size-1):
            hash=(key+i)%size 
            if(table[hash]==None):
               # print("key:-",key, "is not present..")
                flag=+1
                break
            elif table[hash]==key:
                print("key:-",key, "is  present at the location",hash)
                flag+=1
        if flag==0:
            print("key:-",key, "is not present..")    


def quadratic(key,size):
    global totalq
    hash=key%size
    flag=0
    if(tableq[hash]==None):
        tableq[hash]=key
    else:
        for i in range(0,size-1):
            hash=(key+(i**2))%size   #quadratic probing
            if(tableq[hash]==None):
                tableq[hash]=key
                break
    totalq+=1
        

def quadratic_search(key,size):
    hash=key%size
    flag=0
    if(tableq[hash]==None):
        print("key:-",key, "is not present..")
    else:
        for i in range(0,size-1):
            hash=(key+(i**2))%size
            if(tableq[hash]==None):
                #print("key:-",key, "is not present..")
                flag=+1
                break
            elif tableq[hash]==key:
                print("key:-",key, "is  present at location",hash)
                flag=+1
        if flag==0:
            print("key:-",key, "is not present..")

def printtable(size):
    print("linear table:-\n")
    for i in range(size):
        print(table[i],end="\n")
def printtableq(size):
    print("quadratic table:-\n")
    for i in range(size):
        print(tableq[i],end="\n")

    
size=int(input("enter the table size:\n")) 
create(size)
while(True):
    print("MENU:-\n1 for linear\n2 for quadratic\n3 for exit\n")
    ch=int(input("enter:-\n"))
    if ch==1:
        while(True):
            ch2=int(input("enter 1 for insert| 2 for searching|3 for go back\n "))
            if ch2==1:
                if total==size:
                    print("table is full..")
                    
                else:
                    key=int(input("enter the telephone number\n"))
                    linear(key,size)
                    printtable(size)
            elif ch2==2:
                    key=int(input("enter the key you want to search:-"))
                    linear_search(key,size)
            elif ch2 ==3:
                print("going back...\n")
                break
            
    
    elif ch==2:
        while(True):
            ch2=int(input("enter 1 for insert| 2 for searching|3 for go back\n "))
            if ch2==1:
                if totalq==size:
                    print("table is full..\n")
                    
                else:
                    key=int(input("enter the telephone number\n"))
                    quadratic(key,size)
                    printtableq(size)
            elif ch2==2:
                    key=int(input("enter the key you want to search:-"))
                    linear_search(key,size)
            elif ch2==3:
                print("going back\n")
                break
            
    elif ch==3:
        print("EXIT")
        break 
 
            