bank_balance = 0 
def deposit(amt): 
 global bank_balance 
 bank_balance += amt 
 print("deposit:-",amt)
 return bank_balance 
def withdrawa(amt): 
 global bank_balance 
 if bank_balance >= amt: 
    bank_balance -= amt
    print("withdrawa",amt)
 else: 
    print("not enough bank balance!!") 
 return bank_balance 
trans_log = input("enter the transaction log: ")
entry_list = trans_log.split(", ") 
print("?",entry_list)
for entry in entry_list: 
 sep_list = entry.split(" ") 
 print("?",sep_list)
 op = sep_list[0] 
 amt = int(sep_list[1]) 

  
 if op=="D": 
    print("CURRENT BALANCE:-",deposit(amt)) 
 if op=="W": 
    print("CURRENT BALANCE:-",withdrawa(amt)) 
print("current bank balance:",bank_balance) 
