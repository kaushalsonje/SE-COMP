#include<iostream>
#include<string>
using namespace std;
class graph{
    public:
    int num;
    string name;
    string yesno;
    string paisa[100][100];
    string cities[100];
void create_cities(){
    cout<<"Enter the number of cities"<<endl;
    cin>>num;
    for(int i=0;i<num;i++){
        cout<<"enter the city name"<<endl;
        cin>>cities[i];
    }
}
void create_graph(){

    for(int i=0;i<num;i++){
        for(int j=i ;j<num;j++){
            if(i==j){
                paisa[i][j]="null";
                
            }
            else{
            cout<<"there is a path between city "<<cities[i]<<" and "<<cities[j]<<" y/n :-";
            cin>>yesno;
            if(yesno=="y" || yesno=="Y"){
            cout<<"enter the cost to connect the "<<cities[i]<<" and "<<cities[j]<<":-";
            cin>>paisa[i][j];
            paisa[j][i]=paisa[i][j];
            }
            else{
                paisa[j][i]=paisa[i][j]="null";
            }
            }
        }
    }
}
void display(){
    for (int i=0;i<num;i++){
        cout<<"\t"<<cities[i]<<"\t";
    }
    for(int i=0;i<num;i++){
        cout<< "\n";
        cout<<cities[i];
        for(int j=0;j<num;j++){
            cout<<"\t"<<paisa[i][j]<< "\t";
        }
    }
}
};
int main(){
    graph s;
    while(true){
        cout<<"cities:-1| create graph:-2| display:-3|end:-4"<<endl;
        int no;
        cin>>no;
        switch (no)
        {
        case 1:
            s.create_cities();
            break;
        case 2:
            s.create_graph();
            break;
        case 3:
            s.display();
            cout<<endl;
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