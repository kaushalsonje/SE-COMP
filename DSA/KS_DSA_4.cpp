#include<iostream>
using namespace std;
class node{
    public:
        int data;
        node*Rchild,*Lchild;
    node(int val){
        data=val;
        Rchild=NULL;
        Lchild=NULL;
    }
};
node*insert(node*root,int val){ 
    if(root==NULL){
        return new node(val);
        // cout<<"Null"<<endl;
    }
    if(val < root->data){
        root->Lchild=insert(root->Lchild,val);
        
    }
    else{
        root->Rchild=insert(root->Rchild,val);
               
    }
    
    return root;
}
void inorder(node*root){

    if(root==NULL){
        return;
    }
    inorder(root->Lchild);
    cout<<root->data<<" ";
    inorder(root->Rchild);
    
}

void preorder(node*root){
    if(root==NULL){
        return;
    }
    cout<<root->data<<" ";
    preorder(root->Lchild);
    preorder(root->Rchild);
}

void postorder(node*root){
    if(root==NULL){
        return;
    }
    postorder(root->Lchild);
    postorder(root->Rchild);
     cout<<root->data<<" ";
}

bool search(node*root,int val){
    if(root==NULL)return false;
    else if(val==root->data)return true;
    else if(val<root->data)return search(root->Lchild,val);
    else return search(root->Rchild,val);
}
void minimun(node*root){
    node*temp;
    temp=root;
    // int Minimun;
    while(temp->Lchild!=NULL){
        // Minimun=temp->data;
        temp=temp->Lchild;
        // if(temp->data<Minimun){
        //     Minimun=temp->data;
        // }
        // else{
        //     temp=temp->Lchild;
            
        // }
    }
    cout<<"minimum no. is:"<<temp->data<<endl;
}
void maximun(node*root){
    node*temp;
    temp=root;
    // int maximun;
    while(temp->Rchild!=NULL){
        // maximun=temp->data;
        temp=temp->Rchild;
        // if(temp->data>maximun){
        //     maximun=temp->data;
        // }
        // else{
        //     temp=temp->Rchild;
            
        // }
    }
    cout<<"maximun no. is:"<<temp->data<<endl;
}
int height(node*root){
    if(root==NULL){
        return 0;
    }
    // int s,k;
    // s=height(root->Rchild);
    // k=height(root->Lchild);
    return max(height(root->Rchild),height(root->Lchild))+1;
}
void swapnode(node*root){
    if(root==NULL) return;
    else{
        swapnode(root->Lchild);
        swapnode(root->Rchild);
    swap(root->Lchild,root->Rchild);
    }
}

int main(){
    int s;
    node*root=NULL;
    int k;
    while(1){
        cout<<"\n 1.insert first node";
        cout<<"\n 2.insert other nodes";
        cout<<"\n 3.display";
        cout<<"\n 4.maximum element in tree";
        cout<<"\n 5.minimum element in tree";
        cout<<"\n 6.height of tree";
        cout<<"\n 7.swap the right and left node";
        cout<<"\n 8.search";
        cout<<"\n 9.exit"<<endl;
        cout<<"enter your choice"<<endl;
        cin>>k;
        switch(k)
        {   case 1:     cout<<"enter the number"<<endl;
                        cin>>s;
                        root=insert(root,s);
                        break;             
            case 2:     cout<<"enter the number"<<endl;
                        cin>>s;
                        insert(root,s);
                        break;      
            case 3:     cout<<"inorder"<<endl;
                       inorder(root);
                        cout<<"\npreorder"<<endl;
                        preorder(root);
                        cout<<"\npostorder"<<endl;
                        postorder(root);
                        break;
            case 4:     maximun(root);
                        break;    
            case 5:     minimun(root);
                        break;
            case 6:     cout<<"height of this tree is:"<<height(root)<<endl;
                        break;
            case 7:     swapnode(root);
                        cout<<"node are swapped"<<endl;
                        break;
            case 8:     cout<<"enter the number you want to search"<<endl;
                        cin>>s;
                        if(search(root,s)==true)cout<<"key is found";
                        else cout<<"key is not found";
                        break;      
            case 9:  break;
        }
        if (k==9)
        break; 
    }
    // root=insert(root,5);
    // insert(root,3);
    // insert(root,2);
    // insert(root,6);
    // insert(root,2);
    // insert(root,7);
    // cout<<endl;
    // cout<<"inorder traversal"<<endl;
    // inorder(root);
    // cout<<"\npreorder traversal"<<endl; 
    // preorder(root);
    // cout<<"\npostorder traversal"<<endl;
    // postorder(root);
    // cout<<"\nenter the key you want to search"<<endl;
    // cin>>s;
    // if(search(root,s)==true)cout<<"key is found";
    // else cout<<"key is not found";
    // cout<<endl;
    // minimun(root);
    // maximun(root);
    // cout<<"height of this tree is:"<<height(root)<<endl;
    // swapnode(root);
    // cout<<"left and right node is swapped for every node"<<endl;
    // inorder(root);
    
    return 0;
}