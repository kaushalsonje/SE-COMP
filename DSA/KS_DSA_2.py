
table=[]
s,total=0,0
buket={}

def create():
    global s
    s=int(input("enter the table size"))
    for i in range(s):
        table.append([-1,-1])
        buket[i]=-1

def printt():
    global s
    for i in range(s):
        print(table[i],end="|")
        print("")

def chaininsert(key):
    global s,total
    hash=(key)%s
    if (table[hash][0]==-1):
        table[hash][0]=key
        buket[key%s]=hash
    else:
        flag=0
        for i in range(0,s):
            hash=(key+i)%s
            if(table[hash][0]==-1):
                if buket[key%s]!=-1:
                    table[buket[key%s]][1]=hash
                buket[key%s]=hash
                table[hash][0]=key
                flag=1 
                break
        total+=1
        if flag==0:
            print(key," is not inserted")

def chainsearch(key):
    global s
    hash=(key)%s
    i,flag=hash,0
    if(table[hash][0]==-1):
        print("Key is not found")
        flag=1
    elif(table[hash][0]==key):
        print("Key:",key,"is found at location",hash)
        flag=1
    else:
        flag,i,chain = 0,0,-1
        while((table[hash][0]) % s != key % s):
            hash = (key+i)%s
            chain = table[hash][1]
            if (table[hash][0]==key):
                print("Key:",key,"found at index:",hash)
                chain = -1
                flag = 1
                break
            elif(table[hash][0]==-1):
                print("Element is not found")
            i += 1
        else:
            chain = table[hash][1]
        while(chain != -1):
            value = table[chain][0]
            if (value==key):
                print("Key:",key,"found at index:",chain)
                flag = 1
                break
            chain = table[chain][1] 
    if(flag==0):
        print("Key:",key,"not found.")
def delete(key):
    global total
    hash=key%s
    flag = 0
    if table[hash][0]==key and table[hash][1]==-1 :
        table[hash][0]=-1
        flag = 1
        print("Element deleted successfully")  
    elif table[hash][0]==key and table[hash][1]!=-1:
        table[hash][0]=-1
        table[hash][1]=-1
        flag = 1
        print("Element deleted successfully")  
    elif ( table[hash][0]%s!= key % s):
        for i in range(s):
            hash = (key+i) % s
            if table[hash][0]==key and (table[hash][1]==-1 or table[hash][1]!=-1):
                table[hash][0]=-1
                table[hash][1]=-1
                flag = 1
                print("Element deleted successfully")
                break
    else:          
        for i in range (s):
            hash1=(key+i)%s
            temp=table[hash1][1]
            if table[temp][0] == key :
                table[hash1][1]=table[temp][1]
                table[temp][1]=-1
                table[temp][0]=-1
                flag = 1
                print("Element deleted successfully")        
                break
    total-= 1            
    if flag == 0:
        print("Element not found in table")
        total += 1

create()
while True:
    ch=int(input("Enter 1-Table | 0-Exit"))
    if ch == 1:
        while True:
            ch2=int(input("Enter 1-Insert | 2-Search | 3-Delete | 0-Back"))
            if ch2 == 1:
                key = int(input("Enter the key"))
                chaininsert(key)
                printt()
            elif ch2 == 2:
                key = int(input("Enter the key"))
                chainsearch(key)
            elif ch2 == 3:
                key = int(input("Enter the key"))
                delete(key)
                printt()
            elif ch2 == 0:
                print("Going back")
                break
    elif ch == 0:
        print("Exiting")
        printt()
        break
