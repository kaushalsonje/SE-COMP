'''KAUSHAL SUNIL SONJE  
ROLL NO 63 
S:-4''' 
listc=[1,2,3,4,5] 
listf=[2,3,6,7,9] 
listb=[1,2,4,6,8] 
CnB=[] 
CUB=[] 
CorB=[] 
onlyf=[] 
CorFnB=[] 
CUF=[] 
CnFNB=[] 
def q1():
    for i in listc: 
        if i in listb: 
            CnB.append(i) 
    print("question no 1:-student who plays cric and bad both ",CnB) 
q1()
#--------------------------------------------------------- 
for i in listc: 
    CUB.append(i) 
for i in listb: 
    if i not in listc: 
        CUB.append(i) 
#print("student wh o plays cric and bad ",CUB) 
#--------------------------------------------------------- 
for i in CUB: 
    if i not in CnB: 
        CorB.append(i) 
print("question no 2:-student who play cric and bad but not both",CorB) 
#-------------------------------------------------------- 
for i in listf: 
    if i not in listc and i not in listb: 
        onlyf.append(i) 
print("question no 3:-no of stud who play neither cric nor bad",onlyf)
 #-------------------------------------------------------- 
for i in listc: 
    CUF.append(i) 
for i in listf: 
    if i not in listc: 
        CUF.append(i) 
#print(CUF) 
for i in CUF: 
    if i not in listb: 
        CnFNB.append(i) 
print("question no 4:- student who play cric and foot but not bad",CnFNB) 
'''
question no 1:-student who plays cric and bad both [1, 2, 4]
question no 2:-student who play cric and bad but not both [3, 5, 6, 8] 
question no 3:-no of stud who play neither cric nor bad 2 
question no 4:- student who play cric and foot but not bad 4
'''
