#include <iostream> 
#include<string>
using namespace std; 

class publication 
{ 
private: 
string title; 
float price; 
public: 
void add() 
{ 
 cout<<"enter publication information"<< endl; 
 cout<<"enter title of publication:-"; 
 //cin.ignore(); 
 //getline(cin,title);
 cin>>title; 
 cout<<"enter price of publication:-"; 
 cin>>price; 
} 
void display() 
{ 
cout<<"\n------------------------------------"<<endl; 
cout<<"title of publication:"<<title<<endl; 
cout<<"price of publication:"<<price<<endl; 
} 
}; 
class book : public publication  
{ 
private: 
int page_count; 
public: 
void add_book() 
{ 
try 
{ 
 add(); 
 cout <<"enter page count of book:-"<<endl; 
 cin>>page_count; 
if (page_count<=0)
 throw page_count; 
} catch(...) 
{ 
cout<<"invalid page count"<<endl; 
page_count=0; 
} 
} 
 void display_book() 
{ 
 display(); 
cout<<"page count"<<page_count<<endl; 
} 
}; 
class tape: public publication{ 
private: 
float play_time; 
public: 
void add_tape() 
{ 
try{ 
add(); 
cout<<"enter play duration of tape"<<endl; 
cin>>play_time; 
if (play_time<=0) 
 throw play_time; 
 } catch(...) 
{ 
cout<<"invalid play time"<<endl; 
play_time=0; 
} 
} 
void display_tape() 
{ 
 display(); 
 cout<<"play time"<<play_time<<endl; 
 cout<<endl; 
} 
}; 
int main() 
{ 
book b1[10]; 
tape t1[10]; 
int ch=0,b_count=0,t_count=0; 
do 
{ 
cout<<"---publication information ssystem---"<<endl; cout<<"---menu---"<<endl; 
cout<<"1)add books"<<endl; 
cout<<"2)add tape"<<endl; 
cout<<"3)dislay books"<<endl; 
cout<<"4)display tapes"<<endl; 
cout<<"5)exit"<<endl;
cout<<"enter choice:-"<<endl; 
cin>>ch; 
switch(ch) 
{ 
case 1: 
b1[b_count].add_book(); 
b_count++; 
break; 
case 2: 
t1[t_count].add_tape(); 
t_count++;  
break; 
case 3: 
for (int j=0;j<b_count;j++) 
{ 
b1[j].display_book(); 
} break; 
case 4: 
for (int j=0;j<t_count;j++) 
{ 
t1[j].display_tape(); 
} break; 
case 5: 
cout<<"exit"<<endl; 
} 
}while (true); 
return 0; 
} 
  