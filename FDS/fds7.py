def insertion_sort(a): 
    n = len(a) 
    for i in range(1,n): 
        key = a[i] 
        j = i-1 
        while j>=0 and key < a[j]: 
            a[j+1] = a[j] 
            j = j-1 
        a[j+1] = key 
    return a
def shellSort(arr): 
    n = len(arr) 
    gap = n//2 
    while gap > 0: 
        for i in range(gap,n): 
            temp = arr[i]  
            j = i 
            while j >= gap and arr[j-gap] >temp: 
                arr[j] = arr[j-gap] 
                j -= gap    
            arr[j] = temp 
        gap //= 2 
    return arr 
perc = eval(input("Enter list of percentage of 1st year students: ")) 
print("Sort array using [1/2]: ") 
print("1.INSERTION SORT") 
print("2.SHELL SORT") 
ch = int(input("Enter your choice: ")) 
while True: 
    if ch == 1: 
        res = insertion_sort(perc) 
        print("Array sorted using insertion sort: ",res) 
        print("Top 5 scores : ",perc[-1:-6:-1]) 
        break 
    elif ch == 2:  
        print("Array sorted using shell sort: ",shellSort(perc)) 
        print("Top 5 scores : ",perc[-1:-6:-1]) 
        break 
 