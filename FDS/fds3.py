 
books=[] 
cost=[] 
dupp=[] 
dupcst=[] 
morecst=[] 
morebb=[] 
lessbb=[] 
lesscst=[] 
n=eval(input("enter the no of books"))  
def library(): 
    for i in range(n): 
        book=str(input("enter the books")) 
        books.append(book) 
        price=eval(input("enter the cost of books")) 
        cost.append(price) 
    print("list of books",books) 
    print("list of cost",cost) 
library() 
def dub(books,cost): 
    for i in books:
        if i not in dupp:
            dupp.append(i)
    for i in cost:
        if i not in dupcst:
            dupcst.append(i)
    return[dupp,dupcst] 
print("1)new list without duplicate entries",dub(books,cost)) 

def arange(dupp,dupcst): 
    for i in range(len(dupcst)-1): 
        for j in range(len(dupcst)-i-1): 
            if (dupcst[j]>dupcst[j+1]): 
                dupcst[j],dupcst[j+1]= dupcst[j+1],dupcst[j]
                dupp[j],dupp[j+1]= dupp[j+1],dupp[j]
    return[dupp,dupcst] 
print("2)asecending order of books and cost",arange(dupp,dupcst)) 
def grt(dupp,dupcst): 
    for i in range(len(dupcst)): 
        if (dupcst[i] >= 500): 
            morecst.append(dupcst[i]) 
            morebb.append(dupp[i]) 
    return[len(morebb),morecst] 
print("3)no of books having cost grater than 500",grt(dupp,dupcst)) 
def less(dupp,dupcst): 
    for i in range(len(dupcst)): 
        if (dupcst[i] < 500): 
            lesscst.append(dupcst[i])   
            lessbb.append(dupp[i]) 
    return[lessbb,lesscst] 
print("4)list of books having cost less than 500",less(dupp,dupcst)) 
