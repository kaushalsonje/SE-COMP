
#include<iostream> 
//#include<cmath> 
#include<map> 
#include<string> 
using namespace std; 
int main() 
{ 
string state; 
map<string, int> ind; 
map<string, int>::iterator it; 
ind.insert(pair<string,int>("Uttar_Pradesh",1999812341)); 
ind.insert(pair<string,int>("Maharashtra",112372972)); 
ind.insert(pair<string,int>("Bihar",800004637)); 
ind.insert(pair<string,int>("West_Bengal",91347736)); 
ind.insert(pair<string,int>("Madhya_Pradesh",72597565)); 
ind.insert(pair<string,int>("Tamil_Nadu",72138958)); 
ind.insert(pair<string,int>("Rajasthan",68621012)); 
do{ cout<<"Enter State Name:-"<<endl; 
cin >> state; 
for( it = ind.begin();it != ind.end();++it) 
{ 
if(it->first == state) 
cout << "Population of "<< it->first << " is about "<< it->second<<endl; } 
}while(true); 
cout <<endl; 
return 0; 
} 

