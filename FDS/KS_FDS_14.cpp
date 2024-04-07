#include<iostream>
#include<string>
using namespace std;
class deque{
    public:
    const static int size= 10;
    int x;
    int front = -1;
    int rear = -1;
    int array[size];
    bool isfull(){
        if((front == 0 && rear == size-1) ||(rear == front -1)){
            return 1;
        }
        return 0;
    }
    bool isempty(){
        if(front == -1 && rear == -1){
            return 1;
        }
        return 0;
    }
    void insertfront(int x){
        if(isfull()){
            cout<<"deque overflow"<<endl;
        return;      
        }
        if(front == -1){
            front = 0;
            rear = 0;
        }
         if(front == 0){
            front = size -1;
            }else{
                front=front-1;
            }
        array[front]=x;
    }
    void insertrear(int x){
        if(isfull()){
            cout<<"deque overflow"<<endl;
         return;
         }
        if(rear == -1){
            front = 0;
            rear = 0;
        }
        
        if(rear== size-1){
            rear= 0;
        }else{
            rear += 1;
        }
        array[rear]=x;
    }
    void deletefront(int x){
        if(isempty()){
            cout<<"deque underflow"<<endl;
        return;
        }
        if(front==rear){
            front=-1;
            rear=-1;
        }
        if(front == size -1){
            front = 0;
        }
        else{
            front++;
        }
    }
    void deleterear(int x){
        if(isempty()){
            cout<<"deque underflow"<<endl;
        return;
        }
        if(front==rear){
            front=-1;
            rear=-1;
        }
        if(rear == 0){
            rear = size-1;
        }else{
            rear--;
        }
    }
    void display(){
        if(isempty()){
            cout<<"deque underflow"<<endl;
        return;
        }
        if(front<rear){
            for (int i=front;i<=rear;i++){
         cout<<array[i]<<" ";
            }
        }else{
           for (int i=front;i<size-1;i++){
            cout<<array[i]<<" ";
        }
        for (int i=0;i<=rear;i++){
            cout<<array[i]<<" ";
        }
    }
    }
};
int main(){
    deque q;
    q.insertfront(10);
    q.display();
    return 0;
}