#include<iostream>
#include<string>
using namespace std;
class queue{
    public:
    const static int size= 3;
    int x;
    int start = -1;
    int end = -1;
    int array[size];
    void enqueue(int x){
        if(end == size-1){
            cout<<"queue overflow you cannot add more element "<<endl;
        }
        else{
        cout<<"enter the id"<<endl;
        cin>>x;
        array[++end] = x;}
    }
     int dequeue(){
        if(start == end ){
            cout<<"queue underflow"<<endl;
            return -1;        
        }
        return array[++start];
    }
    void display(){
        if(start==end){
            cout<<"queue is empty"<<endl;
        }
        cout<<"Queue contains";
        for(int i=start +1 ;i<=end;i++){
            cout<<"\n"<<array[i]<<" ";
        }
        cout<<"\nend"<<endl;
    }
};
void add_job(queue &q,int job){
    q.enqueue(job);
}
void delete_job(queue &q){
    q.dequeue();
}

int main(){
    int x;
queue job_line;
add_job(job_line,x);
add_job(job_line,x);
add_job(job_line,x);
add_job(job_line,x);
job_line.display();
delete_job(job_line);
job_line.display();

return 0;
}