""" 
ASSIGNMENT 2:  
NAME: kaushal sunil sonje  
CLASS: SE  
BATCH:S4  
ROLL NO.: 63  
Write a Python program to store marks scored in subject “Fundamental of Data  Structure” by N students in the class. Write functions to compute following: 
 a) The average score of class  
b) Highest score and lowest score of class  
c) Count of students who were absent for the test  
d) Display mark with highest frequency''' 
""" 
marks=[] 
def stud(): 
    print("ENTER NO OF STUDENTS IN SE") 
    N=int(input()) 
    for i in range(N): 
        print("ENTER THE MARKS OF STUDENT ALSO ENTER -1 I STUDENT IS ABSENT ") 
        M= int(input()) 
        marks.append(M) 
    print(marks)
stud() 
def avg(): 
    sum=0 
    cnt=0 
    for i in range(len(marks)):
        if marks[i] is not -1: 
            sum=sum+marks[i] 
        cnt+=1 
    print("total marks",sum) 
    print("avg marks",sum/cnt) 
avg() 
def HL(): 
    val=marks[1] 
    val1=marks[0] 
    cntt=0 
    for mark in marks: 
        if mark == -1: 
            continue 
        else: 
            if mark<val: 
                val=mark
            elif val1<mark: 
                val1=mark 
    print("lowest marks =",val,"higest marks=",val1) 
HL() 
def ab(): 
    cnt=0 
    for i in range(len(marks)): 
        if marks[i] is -1: 
            cnt +=1 
    print("NO OF ABSENT STUDENT",cnt) 
ab() 
def Highest_freq():  
    count = 0  
    maxfrequency=0  
    for i in range(len(marks)):  
        for j in range(len(marks)):  
            if marks[i]==-1:  
                continue  
            else:  
                if marks[i] == marks[j]:  
                    count += 1 
                if count > maxfrequency: 
                    maxfrequency = count  
                    maxfreqnum = marks[i]  
        count = 0  
    print("the highest frequency of ",maxfreqnum,"is",maxfrequency)  
Highest_freq() 
""" 
ENTER NO OF STUDENTS IN SE 
10 
ENTER THE MARKS OF STUDENT ALSO ENTER -1 I STUDENT IS ABSENT -1 
ENTER THE MARKS OF STUDENT ALSO ENTER -1 I STUDENT IS ABSENT 2 
ENTER THE MARKS OF STUDENT ALSO ENTER -1 I STUDENT IS ABSENT 3 
ENTER THE MARKS OF STUDENT ALSO ENTER -1 I STUDENT IS ABSENT 44 
ENTER THE MARKS OF STUDENT ALSO ENTER -1 I STUDENT IS ABSENT 4 
ENTER THE MARKS OF STUDENT ALSO ENTER -1 I STUDENT IS ABSENT 44 
ENTER THE MARKS OF STUDENT ALSO ENTER -1 I STUDENT IS ABSENT 4
ENTER THE MARKS OF STUDENT ALSO ENTER -1 I STUDENT IS ABSENT 4 
ENTER THE MARKS OF STUDENT ALSO ENTER -1 I STUDENT IS ABSENT 5 
ENTER THE MARKS OF STUDENT ALSO ENTER -1 I STUDENT IS ABSENT 6 
[-1, 2, 3, 44, 4, 44, 4, 4, 5, 6] 
total marks 116 
avg marks 12.88888888888889 
lowest marks = 2 higest marks= 44 
NO OF ABSENT STUDENT 1 
the  
highest frequency of 4 is 3 
"""
