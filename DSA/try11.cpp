/*
Department maintains a student information. The file contains roll number, name, division and address. Allow user to add, delete information of student. Display information of particular employee. If record of student does 
not exist an appropriate message is displayed. If it is, then the system displays the student details. Use sequential file to maintain the data.
*/


#include<iostream>
#include<fstream>
#include<string>

using namespace std;

class Record{
	public:
	int rno;
	string name;
	string add;
	string div;
	
	Record(){
		rno =0;
		name = "";
		add = "";
		div = "";
	}
	
	int getrno(){
		return rno;
	}
	
	void getdata(){
		//cout<<"Enter details of student: "<<endl;
		cout<<"Roll no.: ";
		cin>>rno;
		cout<<"Name: ";
		cin>>name;
		cout<<"Division: ";
		cin>>div;
		cout<<"Address: ";
		cin>>add;
	}
	
	void putdata(){
		cout<<"Details of student: "<<endl;
		cout<<"\nRoll no.: "<<rno;
		cout<<"\t\tName: "<<name;
		cout<<"\nDivision: "<<div;
		cout<<"\t\tAddress: "<<add;
		cout<<"\n";
	}
	
};

class File{
	ifstream fin;
	ofstream fout;
	fstream fs;
	
	public:
	 void insert(){
	 	fout.open("Student.txt",ios::app);
	 	Record r;
	 	r.getdata();
	 	fout<<r.getrno()<< " "<<r.name<<" "<<r.div<<" "<<r.add<<endl;
	 	fout.close();
	 }
	 
	 void display(){
	 	Record r;
	 	fin.open("Student.txt");
	 	while(fin>>r.rno>>r.name>>r.div>>r.add){
	 		r.putdata();
	 	}
	 	fin.close();
	 }
	 
	 void search(int rn){
	 	Record r;
	 	fin.open("Student.txt");
	 	bool found = false;
	 	while(fin>>r.rno>>r.name>>r.div>>r.add){
	 		if(r.getrno() == rn){
	 			found = true;
	 			break;
	 		}
	 	}
	 	fin.close();
	 	if(found) {
	 		cout<<"Record found for roll no. :"<<rn<<endl;
	 		r.putdata();
	 	}else{
	 		cout<<"\nRecord not found"<<endl;
	 	}
	 	
	 }
	 
	 int deleterec(int rn){
	 	fin.open("Student.txt");
	 	
	 	ifstream temp_in;temp_in.open("Temp.txt");
	 	ofstream temp_out;temp_out.open("Temp.txt",ios::app);
	 	bool found = false;
	 	Record r;
	 	while(fin>>r.rno>>r.name>>r.div>>r.add){
	 		if(r.getrno() == rn){
	 			found = true;
	 			break;
	 		}else{
	 			temp_out<<r.rno<< " "<<r.name<<" "<<r.div<<" "<<r.add<<endl;
	 		}
	 	}
	 	fin.close();
	 	temp_out.close();
	 	remove("Student.txt");
	 	rename("Temp.txt","Student.txt");
	 	return found;
	 }
};

int main(){
	File f;
	while(true){
		cout<<"\nSelect Operation: "<<endl;
		cout<<"1.Insert Record \n2. Display Record\n3.Search Record\n4.Delete Record\n5.Exit"<<endl;
		cout<<"Enter your choice : ";
		int ch;
		cin>>ch;
		
		switch(ch){
			case 1:
				cout<<"Enter no. of records you want to insert: ";
				int n;
				cin>>n;
				for(int i=0; i<n; i++){
					cout<<"Enter details of student "<<i+1<<" : "<<endl;
					f.insert();
				}
				break;
			case 2:
				f.display();
				break;
			case 3:
				cout<<"Enter roll no. to be searched: ";
				int rn;
				cin>>rn;
				f.search(rn);
				break;
			case 4:
				int rndel;
				cout<<"Enter roll no. whose record is to be deleted: ";
				cin>>rndel;
				f.deleterec(rndel);
				break;
			case 5:
				return 0;
				break;
			default:
				cout<<"Invalid choice !!!"<<endl;
				break;
		}
	}
}
