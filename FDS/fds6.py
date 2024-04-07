perc = eval(input("Enter list of percentage of 1st year students: ")) 
def selectsort(a): 
    l = len(a) 
    for i in range(l): 
        min = i 
        for j in range(i+1, l): 
            if a[j]< a[min]: 
                min = j 
        a[i],a[min] = a[min], a[i] 
    return a 
def Bubble_Sort(a): 
    l = len(a) 
    for i in range(l-1): 
        for j in range(l-i-1): 
             if a[j] > a[j + 1]: 
                a[j], a[j + 1] = a[j + 1], a[j] 
    return a 
print("Sort array using [1/2]: ") 
print("1.SELECTION SORT")
print("2.BUBBLE SORT") 
ch = int(input("Enter your choice: ")) 
while True: 
    if ch == 1: 
        res = selectsort(perc) 
        print("Array sorted using selection sort: ",res) 
        print("Top 5 scores : ",perc[-1:-6:-1]) 
        break 
    elif ch == 2: 
        res = Bubble_Sort(perc) 
        print("Array sorted using bubble sort: ",res) 
        print("Top 5 scores : ",perc[-1:-6:-1]) 
        break 
