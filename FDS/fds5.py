key=int(input("enter the element you want to search")) 
RL=[50,53,54,63,57,61,62,64,99,100,55,1] 
print("unsorted array") 
for r in range(len(RL)): 
    print(RL[r], end=" " ) 
def linear(l): 
    for i in range (len(l)): 
        if l[i] == key: 
            return 1 
    return -1 
print('\n') 
index=linear(RL) 
if index ==1: 
    print(f"student roll no {key} is present ..output by linear search" ) 
else:  
    print(f"student roll no {key} is not present ..output by linear search")
#----------------------sentinel search-------------------------------------------------------- 
def sentinel(l):
    last =l[-1] 
    l[-1]=key 
    i=0 
    while l[i] != key: 
        i+=1 
    RL[len(RL)-1]=last 
    if((i<len(RL)-1) or (RL[len(RL)-1]==key)): 
        print(f"student of roll no {key} is attending the program ..output by sentinel search")  
    else: 
        print(f"student of roll no {key} is not attending the program ..output by sentinel search") 
sentinel(RL) 
#---------------binary search--------------------------------------------------------------- 
def sorty(a): 
    for r in range(len(a)-1): 
        for j in range(len(a)-r-1): 
            if(a[j]>=a[j+1]): 
                a[j],a[j+1]=a[j+1],a[j] 
    print("sorted array") 
    for r in range(len(a)): 
        print(a[r], end=" " ) 
sorty(RL) 
def binary(l):
    lb=0 
    ub=len(l)-1 
  
    while lb<=ub: 
        mid=(lb+ub)//2 
        if l[mid] == key: 
            return mid 
        elif l[mid]<key: 
            lb=mid+1 
        elif l[mid]>key: 
            ub=mid-1 
  
    return -1 
print('\n') 
result= (binary(RL)) 
if result==-1: 
    print("element not found ..output by binary search") 
else: 
    print( f"element {key} found at index {result} ""..output by binary search") 
#-----------------fibonacci search----------------------------------------------------------------------------------------- 
def fibMonaccianSearch(arr, key, n):  
    fibMMm2 = 0  
    fibMMm1 = 1  
    fibM = fibMMm2 + fibMMm1 
    while (fibM < n):  
        fibMMm2 = fibMMm1  
        fibMMm1 = fibM   
        fibM = fibMMm2 + fibMMm1 
    offset = -1  
    while (fibM > 1):  
        i = min(offset+fibMMm2, n-1)  
        if (arr[i] < key):  
            fibM = fibMMm1  
            fibMMm1 = fibMMm2  
            fibMMm2 = fibM - fibMMm1  
            offset = i 
        elif (arr[i] > key):  
            fibM = fibMMm2  
            fibMMm1 = fibMMm1 - fibMMm2   
            fibMMm2 = fibM - fibMMm1   
        else:  
            return i 
    if(fibMMm1 and arr[n-1] == key):   
        return n-1 
    return -1 
n = len(RL)  
ind = fibMonaccianSearch(RL, key, n)  
if ind>=0: 
 print('\n',"Found at index:",ind, "..output by fibonacci search")  
else:  
 print(key,"isn't present in the array""..output by fibonacci search");
