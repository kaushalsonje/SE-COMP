#include<iostream>
#include<string>
using namespace std;
class stack {
    public:
    const static int size = 100;
    int top = -1;
    char array[size];   

    void push(char x){
        if(top == size-1){
            cout<<"stack is overflow";
            return;
        }
        array[++top] = x;
    }
        char pop(){
            if(top==-1){
                cout<<"stack underflow";
                return -1;
            }
            return array[top--];
        }

        void display(){
            if(top == -1){
                cout<<"stack is empty";
            }
            else{
            cout <<"stack content:-\n";
            for (int i=0;i<=top;i++){
                cout<<array[i]<<" ";
            }
            cout<<"end"<<endl;
            }
        }
    };
int main(){

stack s;
string user_input;
cout<<"enter the string"<<endl;
getline(cin,user_input);
string org_str="";
for(int i=0;i<user_input.size();i++)
{ 
    char ch= user_input[i];
     if (ch >='A' and ch <='Z') {
        ch = (char)(ch - 'A'+'a');
    //s.push(ch);
    }
    if((ch >='a')and (ch <='z')){
      s.push(ch);
      org_str.push_back(ch);
    }
}
//s.display();
cout<<"original string:-"<<user_input<<endl;
cout<<"modified original string:-"<<org_str<<endl;

//cout<<"reverse string:-\n";
string rev_str = "";
while (s.top!= -1){
    rev_str.push_back(s.pop());
}
cout<<"reverse string:"<<rev_str<<endl;
int is_pali;
for(int i=0 ;i<org_str.size();i++){
    for(int j=0;i<rev_str.size();i++){
    if(org_str[i] != rev_str[i]){
       
         is_pali = 0;}
}
}  
if (is_pali == 0){
    cout<<"string is not palindrome"<<endl;
}
else{
    cout<<"string is palindrome";
}
    return 0;
}
