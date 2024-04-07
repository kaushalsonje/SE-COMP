#include<iostream>
#include<stack>
#include<math.h>
using namespace std;
class node{
    public:
        char data;
        node*Rchild,*Lchild;
    node(char val){
        data=val;
        Rchild=NULL;
        Lchild=NULL;
    }
};
stack<node*>ch;
bool isoperator(char c){
    if(c=='+'|| c=='-' || c=='*'||c=='/'||c=='^'){
        return true;
    }
    else{
        return false;
    }
}
node* create(string prefix,int n){
    
    for(int i=n-1;i>=0;i--){
        char ks=prefix[i];
        node*temp=new node(ks);
        if(!isoperator(ks)){
            ch.push(temp);
        }
        else{
            temp->Lchild=ch.top();
            ch.pop();
            temp->Rchild=ch.top();
            ch.pop();
            ch.push(temp);
        }
    }
    return ch.top();
}
void postorder(node*root){
    if(root==NULL)return;
    stack<node*>st,res;
    st.push(root);
    while(!st.empty()){
        node*curr=st.top();
        st.pop();
        res.push(curr);
        if(curr->Lchild!=NULL){
            st.push(curr->Lchild);
        }
        if(curr->Rchild!=NULL){
            st.push(curr->Rchild);
        }
    }
    while (!res.empty())
    {
        cout<<res.top()->data;
         res.pop();
    }
    
}
void Delete(node*root){
    if(root==NULL){
        return;
    }
    Delete(root->Lchild);
    Delete(root->Rchild);
    delete(root);
}
void inorder(node*root){
    if(root==NULL){
        return;
    }
    inorder(root->Lchild);
    cout<<root->data<<"";
    inorder(root->Rchild);
}
int main(){
    string prefix;
    int n;
    node*s;
while(true){
        cout<<"\n||expression:0|create:-1| delete:-2| display:-3|end:-4||:-";
        int no;
        cin>>no;
        switch (no)
        {
        case 0:
            cout<<"enter the expression"<<endl;
            cin>>prefix;
            break;
        case 1:
            n = prefix.length();
            s=create(prefix,n);
            cout<<"creating";
            for(int i=0;i<3;i++){   
            _sleep(1000);
            cout<<".";
            }
            _sleep(100);
            cout<<"tree created!!!!!!";
            break;
        case 2:
            Delete(s);
            cout<<"deleting";
            for(int i=0;i<3;i++){   
            _sleep(10000);
            cout<<".";
            }
            _sleep(100);
            cout<<"tree deleted!!!!!!";
            break;
        case 3:
        cout<<"POST_ORDER:-";
           postorder(s);
            break;
        case 4:
            cout<<"chal nikal";
            break;
        default:
            break;
        }
        if(no==4)break; 
    }
    return 0;
}
/*
string prefix = "+--a*bc/def";
int n = prefix.length();
node*s=create(prefix,n);
postorder(s);

Delete(s);
cout<<"\ndeleting!!";
for(int i=0;i<3;i++){
_sleep(1000);
cout<<".";
}
_sleep(100);
cout<<"tree deleted!!!!!!";
postorder(s);
    return 0;
*/
