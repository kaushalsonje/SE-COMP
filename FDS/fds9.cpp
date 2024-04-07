/*Department of Computer Engineering has student's club named 'Pinnacle Club'. Students of Second, third and final year of department can be granted membership on request. Similarly one may cancel the membership of club. First node is reserved for president of club and last node is reserved for secretary of club. Write C++ program to maintain club member‘s information using singly linked list. Store student PRN and Name. Write functions to 
a) Add and delete the members as well as president or even secretary. 
b) Compute total number of members of club 
c) Display members 
d) Two linked lists exists for two divisions. Concatenate two lists*/ 
#include<iostream> 
#include<string> 
using namespace std; 
class node{ 
 string name; 
 int prn; 
 node*next; 
 public: 
 node(int s,string nm){
 prn=s; 
 name=nm; 
 next =NULL; 
 } 
 friend class list; 
}; 
class list{ 
 node*head; 
 public: 
 list(){ 
 head=NULL; 
 } 
 void create_member();
  void display(); 
void insertpresident(); 
void insertsecretary(); 
void delete_member(); 
void deletepresident(); 
int Total_members(); 
void delete_Secretary(); 
 void concatList(list &q1); 
 }; 
void list::create_member()
{ 
int s; 
 string name;
 node*temp=head; 
 node*new_Node; 
 if(head==NULL){ 
 cout<<"ENTER YOUR NAME"<<endl;  cin>>name; 
 cout<<"ENTER YOUR PRN NUMBER"<<endl;  cin>>s; 
 head=new node(s,name); 
 cout<< endl <<"node is created "<<endl; } 
else{ 
 // cout<<"node is already created"; 
  cout<<"ENTER YOUR NAME"<<endl;  cin>>name; 
 cout<<"ENTER YOUR PRN NUMBER"<<endl;  cin>>s; 
 new_Node=new node(s,name); 
 cout<< endl <<"node is created "<<endl;
   temp->next = new_Node; 
 temp = temp->next; 
} 
} 
void list::display() 
{
node *temp=head; 
if(head==NULL) 
cout<<endl<<"List is Empty"; 
else 
{ cout<<"\n list is given below \n"; 
while(temp!=NULL){ 
cout<<temp->prn<<"_"<<temp->name<<"->"; 
temp=temp->next; 
} 
cout<<"NULL"<<endl; 
} 
} 
void list::insertpresident(){ 
 int s; 
string name; 
if(head==NULL) 
{ 
create_member(); 
} 
else 
{ 
cout<<"\nEnter president PRN number: "; 
cin>>s; 
cout<<"Enter president name: "; 
cin>>name;
node* new_node=new node(s,name); 
new_node->next=head; 
head=new_node;; 
cout<<"Inserted "<<new_node->name<<" at the beginning."; } 
} 
void list::insertsecretary() 
{ 
 int s; 
 string name; 
 node*temp; 
 node*new_node; 
 if(head==NULL) 
 create_member(); 
 else 
 { 
 cout<<"\nENTER secretary PRN NUMBER: "; 
 cin>>s; 
 cout<<"ENTER secretary NAME: "; 
 cin>>name; 
 temp=head;  
 new_node=new node(s,name); 
 while(temp->next!=NULL) 
 temp=temp->next; 
 }
  
 temp->next=new_node; 
} 
void list::deletepresident() 
{ 
 node *temp; 
 if(head==NULL) 
 cout<<"\nClub is Empty..";  else 
 { 
 temp=head; 
 head=head->next; 
 temp->next=NULL; //Not necessary  delete temp; 
 cout<<"\nPresident deleted.."; } 
} 
void list::delete_Secretary() 
{ 
 node *second_last; 
 node *temp; 
 second_last=head; 
 if(head==NULL) 
 cout<<"\nClub is Empty..";  else
 { 
 while(second_last->next->next!=NULL) 
 { 
 second_last=second_last->next; 
 } 
 temp=second_last->next; 
 second_last->next=NULL; 
 delete temp; 
 cout<<"\nSecretary Deleted."; 
} 
} 
void list::delete_member() 
{ 
 cout<<"ENTER THE POSITION YOU WANT TO DELETE THE MEMBER"<<endl;  int pos; 
 cin>>pos; 
 if(pos==0){ 
 deletepresident(); 
 return; 
 } 
 int current_pos=0; 
 node*prev=head; 
 while(current_pos!=pos-1){ 
 prev=prev->next; 
 current_pos++;
 } 
 node*temp=prev->next;  prev->next=prev->next->next;  delete temp; 
} 
int list::Total_members() { 
node *temp; 
int count=0; 
temp=head; 
if(head==NULL) 
{ 
 cout<<"\nList is empty.";  return 0; 
} 
while(temp!=NULL) 
{ 
temp=temp->next; 
count++; 
} 
int s=count; 
cout<< s; 
} 
void list::concatList(list &q1)
{ 
 node *temp,*temp1; 
 temp=q1.head; 
 if(temp==NULL) 
 { 
 cout<<"\nList 2 is empty"; 
 return; 
 } 
 temp1=head; //first list 
 while(temp1->next!=NULL) 
 { 
 temp1=temp1->next; 
 } 
 temp1->next=temp; 
 q1.head=NULL; //second list is set to null  cout<<"\nAfter concatenationlist";  display(); 
  
} 
int main(){ 
node*head=NULL; 
list *l; 
 int choice,selectList; 
 list l1,l2; 
 l=&l1;
 X:cout<<"\nSelect List\n1.List 1\n2.List 2\nEnter choice: "; 
 cin>>selectList; 
 if(selectList==1) 
 { 
 l=&l1; 
 } 
 else if(selectList==2) 
 { 
 l=&l2; 
 } 
 else 
 { 
 cout<<"\nWrong list Number."; 
 goto X; 
 } 
 do 
 { 
 cout<<"\n1. create_member\n2.Insert President\n3.Insert  secretary\n4.display\n5.deletepresident" 
 <<"\n6.delete_Secretary\n7.Total_members\n8.Combine lists\n9. Reselect List"  <<"\n10. delete_member\t"; 
 cin>>choice; 
 switch(choice) 
 {
 case 1: l->create_member();  break; 
 case 2: l->insertpresident();  break; 
 case 3: l->insertsecretary();  break; 
 case 4: l->display(); 
 break; 
 case 5: l->deletepresident();  break; 
 case 6: l->delete_Secretary();  break; 
 case 7: l->Total_members();  break; 
 case 8: l->concatList(l2);  break; 
 case 9: 
 goto X; 
 break; 
 case 10: l->delete_member();  break;  
 default: 
 cout<<"Wrong choice";  } 
 }while(choice!=0);
 return 0; 
} 