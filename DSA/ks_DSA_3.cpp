#include<iostream>
#include<string>
using namespace std;
class node{
    public:
        node*down;
        node*next;
        string data;
        node*root=NULL;
        node*temp=NULL;
        node*temp1=NULL;
        node*ch;
        node*temp2;

        int flag;
        int chno;
        string ks;
    node(){
        string data;
        node*next;
        node*down;
        int flag;
    }
    node* create(){
        node*new_node=new node();
        new_node->next=NULL;
        new_node->down=NULL;
        new_node->flag=0;
        cout<<"enter the name:-";
        cin>>new_node->data;
        return new_node;
    }

void insertbook(){
    if(root==NULL){
            ch=create();
            root=ch;
    }
    else{
            cout<<"\nbook title is already assigned try to add the chapters or sections YOU STUPID"<<endl;
        }
}
void insertchapters(){
    if (root==NULL){
        cout<<"\nbook is not created first create the book BC"<<endl;
    }
    else{
        cout<<"\nenter the number of chapters"<<endl;
        cin>>chno;
        for(int i=0;i<chno;i++){
            ch=create();
            if (root->flag ==0){
                root->down=ch;
                root->flag=1;
            }
            else{
                temp=root;
                temp=temp->down;
                while(temp->next!=NULL)
                    temp=temp->next;
                temp->next=ch;
            }
        }
    }
}
void insertsection(){
    if(root==NULL){
        cout<<"\nfirst create a book bsdk"<<endl;
    }
    else if(root->down==NULL){
        cout<<"\nfirst create chapter MC"<<endl;
    }
    else{
        cout<<"\nenter the name of chapter you want to add a section in it"<<endl;
        cin>>ks;
        temp=root;
        temp=temp->down;
        while(temp!=NULL){
            if(temp->data==ks){
            temp1=temp;
            cout<<"\nenter the number of sections"<<endl;
            cin>>chno;
            for(int i=0;i<chno;i++){
            ch=create();
            if (temp->flag ==0){
                temp->down=ch;
                temp->flag=1;
            }
            else{
                temp1=temp;
                temp1=temp1->down;
                while(temp1->next!=NULL)
                    temp1=temp1->next;
                temp1->next=ch;
            }
        }
    }
            // else{
            //     cout<<"chapter not found!!"<<endl;
            // }
            temp=temp->next;
        }
    }
}
void insertsubsections(){    
  
    if(root==NULL){ 
        cout<<"\n there is no book";   
   }
    else{
    cout<<"\n Enter the name of chapter on which  you want to enter the section"<<endl;
    cin>>ks;
    temp=root;
        if(temp->flag==0){
            cout<<"\n their are no chapters on in book";
        }
        else{
            temp=temp->down;
            while(temp!=NULL){ 
                if(temp->data==ks){       
                    cout<<"\n enter name of section in which you want to enter the sub section"<<endl;
                    cin>>ks;
                    if(temp->flag==0){
                        cout<<"\n their are no sections ";   
                    }
                    else{
                        temp=temp->down;
                        while(temp!=NULL){
                            if(temp->data==ks){
                                cout<<"\n how many subsections you want to enter"<<endl;
                                cin>>chno;
                    for(int i=0;i<chno;i++){
                        temp1=create();
                        if(temp->flag==0){
                            temp->down=temp1;
                            temp->flag=1;  
                            temp2=temp->down;
                        }
                        else{           
                        
                            while(temp2->next!=NULL){
                                temp2=temp2->next;          
                            }
                        temp2->next=temp1;                 
                        }   
                    }                              
                break;
                            }      
                            temp=temp->next;
                        }
                    }       
                }
                temp=temp->next;
            }
        }    
    }
}   
void display(){     
    if(root==NULL){  
        cout<<"\n book not exist"; 
    }
    else{
        temp=root;
        cout<<"\n NAME OF BOOK:  "<<temp->data;
    if(temp->flag==1){
        temp=temp->down;
        while(temp!=NULL){     
            cout<<"\n\t\tNAME OF CHAPTER:  "<<temp->data;
            temp1=temp;
            if(temp1->flag==1){ 
                temp1=temp1->down;
                while(temp1!=NULL){     
                    cout<<"\n\t\t\t\tNAME OF SECTION:  "<<temp1->data;
                    temp2=temp1;
                    if(temp2->flag==1){
                        temp2=temp2->down;
                        while(temp2!=NULL){
                            cout<<"\n\t\t\t\t\t\tNAME OF SUBSECTION:  "<<temp2->data;     
                            temp2=temp2->next;
                        }
                    }     
                temp1=temp1->next;
                }
            }   
        temp=temp->next;
        }
    }
    }                              
}                    
};
int main(){
    node*root;
    node s;
    int x;  
       while(1){
            cout<<"\n 1.insert book";
            cout<<"\n 2.insert chapter";
            cout<<"\n 3.insert section";
            cout<<"\n 4.insert subsection";
            cout<<"\n 5.display book";
            cout<<"\n 6.exit"<<endl;
            cout<<"enter your choice"<<endl;
            cin>>x;
           switch(x)
           {   case 1:          s.insertbook();
                                         break;             
                case 2:          s.insertchapters();
                                         break;      
                case 3:          s.insertsection();
                                         break;
                case 4:          s.insertsubsections();
                                         break;    
                case 5:          s.display();
                                         break;      
                case 6:  break;
           }
       }
       return 0;
}      
    // // s.insertbook();
    // // cout<<endl;
    // // s.display();
    // // s.insertbook();
    // // s.display();
    // s.insertbook();
    // cout<<endl;
    //  s.display();
    // cout<<"-----"<<endl;
    // s.insertchapters();
    // cout<<"___"<<endl;
    // //s.insertchapters();
    // s.display();
    // s.insertsection();
    // cout<<"----"<<endl;
    // s.display();
    // s.insertsubsections();
    // s.display();

