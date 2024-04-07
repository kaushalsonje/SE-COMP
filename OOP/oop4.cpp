#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main()
{
//creating output file(data.txt) and writing the information
ofstream writefile("data.txt");
writefile<<" File created successfully!! "<<endl;
writefile<<" This is the information in the file:\n "<<endl;
writefile<<" My name is kaushal sonje "<<endl;
writefile<<" This is file handling program in cpp. \n"<<endl;
writefile.close();
//opening as an input file and reading the info
ifstream openfile("data.txt");
string line;
while (!openfile.eof())
{
getline(openfile,line);
cout<<line<<endl;
}
openfile.close();
return 0;
} 