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
        char peek(){
            return array[top];
        }
        bool isempty(){
            if(top == -1)
            return 1;
            else{
                return 0;
            }
        }
    };

int main(){
    stack brackets;
    string s;
    cout<<"enter the paranthesis to check balancing\n";
    cin>> s; 
    bool is_bal = true;
    for (int i=0;i<s.size();i++){
        
        if(s[i] == '(' or s[i] == '{' or s[i] == '['){
            brackets.push(s[i]);
        }
        else if( s[i] ==')' or s[i]== '}' or s[i] == ']'){
           if(brackets.isempty()){
            is_bal = false;
            break;
        }
           char last_bracket = brackets.peek();
            if(s[i]==')' and last_bracket == '('){
                brackets.pop();
            }
             else if(s[i]=='}' and last_bracket == '{'){
                brackets.pop();
            }
             else if(s[i]==']' and last_bracket == '['){
                brackets.pop();
            }
        }
    }
    if( not brackets.isempty()){
        is_bal = false;
    }
    //brackets.display();
    if(is_bal)
    cout<<s<<"is balanced"<<endl;
    else
        cout<<s<<"is not balance;<<endl";
    
    return 0;
}